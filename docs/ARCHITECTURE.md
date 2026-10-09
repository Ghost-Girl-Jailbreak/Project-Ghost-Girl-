# Architecture

How Project Ghost Girl's pieces fit together.

> 🚧 **This document describes the planned architecture.** Some
> parts are not yet built.

---

## The Big Picture

```
┌────────────────────────────────────────────────────┐
│           GitHub (Ghost-Girl-Jailbreak)            │
│                                                    │
│  ┌─────────────────────┐   ┌────────────────────┐  │
│  │  Project-Ghost-Girl │   │ GhostGirl-App-X    │  │
│  │  (main repo)        │   │ (one per app)      │  │
│  │                     │   │                    │  │
│  │  - Client source    │   │ - App .xex         │  │
│  │  - repo.ini         │   │ - app.ini          │  │
│  │  - Docs             │   │                    │  │
│  └──────────┬──────────┘   └──────────┬─────────┘  │
│             │                         │            │
└─────────────┼─────────────────────────┼────────────┘
              │                         │
              │  HTTPS                  │  HTTPS
              │  (manifest fetch)       │  (app download)
              ▼                         ▼
       ┌──────────────────────────────────────┐
       │       Xbox 360 (jailbroken)          │
       │                                      │
       │  ┌────────────────────────────────┐  │
       │  │       GhostGirl.xex            │  │
       │  │       (client app)             │  │
       │  │                                │  │
       │  │  1. Fetch repo.ini             │  │
       │  │  2. Parse app list             │  │
       │  │  3. Show UI                    │  │
       │  │  4. Download selected app      │  │
       │  │  5. Install to Hdd:\Apps\      │  │
       │  └────────────────────────────────┘  │
       │                                      │
       └──────────────────────────────────────┘
```

---

## Components

### 1. The Client (`GhostGirl.xex`)

The app running on the console. Written in C++ using the Xbox 360
XDK.

**Responsibilities:**

- Fetch the manifest from GitHub
- Parse the manifest into an app list
- Render the UI
- Handle controller input
- Download app files
- Write them to the console's storage
- Verify checksums (optional)

**Does NOT:**

- Host any content
- Track users
- Connect to any server other than GitHub

---

### 2. The Manifest (`repo.ini`)

A plain INI file hosted in the main repo. Lists every available app.

**Contains, per app:**

- Title, author, version
- Download URL (raw GitHub)
- Install path on the console
- Optional checksum

**Does NOT contain:**

- Any code
- Any executable files
- Any personal data

See [REPO_FORMAT.md](REPO_FORMAT.md) for the full spec.

---

### 3. App Repos (`GhostGirl-App-<name>`)

One GitHub repo per app. Keeps each app isolated and versionable.

**Contains:**

- The compiled `.xex`
- An `app.ini` with metadata
- A `README.md`

**Does NOT contain:**

- The client
- Other apps
- Anything shared between apps

---

### 4. The Softmod Package (`GhostGirlRepack.zip`)

The initial install payload. Contains the jailbreak files users
need to run the exploit.

**Contains:**

- ABadUpdate / ABadAvatar payload
- Dash files
- Supporting configs

**Does NOT contain:**

- The client (yet — that's a separate future release)
- Any third-party apps

---

## Data Flow

### Launch

```
User powers on console
    ↓
Jailbreak runs (from USB)
    ↓
User signs in as abadavatar
    ↓
User launches GhostGirl.xex
    ↓
Client fetches repo.ini from GitHub
    ↓
Client parses manifest
    ↓
Client shows app list
```

### Install an App

```
User selects app
    ↓
Client downloads .xex from app repo
    ↓
Client verifies checksum (if present)
    ↓
Client writes to Hdd:\Apps\<AppName>\
    ↓
Client shows success
    ↓
User launches app from dashboard
```

---

## Trust Boundaries

| Component | Trusted? |
|---|---|
| The client | ✅ Yes — you built it |
| The manifest | ⚠️ Yes, but only as much as you trust GitHub |
| App repos | ⚠️ Only as much as you trust their authors |
| The `.xex` files | ⚠️ Only after checksum verification |
| The console | ✅ Yes — it's yours |
| GitHub | ✅ Yes — official hosting |

---

## Future Additions

Possible future components:

- **Update checker** — notifies when a new client version is available
- **Icon downloader** — fetches icons from app repos
- **Search / categories** — filters the app list
- **Favorites** — pins favorite apps to the top
- **Download queue** — install multiple apps in sequence

None of these are decided yet.

---

## Related

- [REPO_FORMAT.md](REPO_FORMAT.md) — manifest schema
- [BUILDING.md](BUILDING.md) — how to build the client
- [DESIGN.md](DESIGN.md) — UI design
