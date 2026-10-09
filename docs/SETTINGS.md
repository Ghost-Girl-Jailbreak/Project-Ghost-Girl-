# Settings Reference

Every console setting and client configuration option in one place.

---

## Console Settings (Required for Jailbreak)

These must be set **before** plugging in the USB stick.

### Wi-Fi

**Location:** Settings → System → Network Settings
**Value:** Disconnected / Off

**Why:** The console must not connect to the internet while the
exploit runs. If Wi-Fi is on, the jailbreak will fail.

---

### Auto Sign-In

**Location:** Settings → System → Console Settings → Startup and Shutdown
**Value:** Off

**Why:** The exploit requires the console to sit at the sign-in
screen without auto-logging into a profile. The `abadavatar`
profile appears there.

---

### Startup and Shutdown

Recommended for jailbreaking:

| Setting | Value |
|---|---|
| Auto Sign-In | Off |
| Startup Animation | Any |
| Background Downloads | Off |

---

## Console Settings (Optional)

### Storage

**Location:** Settings → System → Storage

Where apps install. Recommended:

- Install to **HDD** if you have one
- Use **USB** if no HDD

---

### Display

**Location:** Settings → System → Console Settings → Display

Any resolution works. The client scales to whatever the console
outputs.

---

### Network (After Jailbreak)

**Location:** Settings → System → Network Settings

You can re-enable Wi-Fi **after** the jailbreak completes to
download apps from the store.

---

## Client Configuration

The client stores its settings in `config.h` at compile time.
User-editable settings will be added in a future version.

### Current Config Keys

| Key | Default | Purpose |
|---|---|---|
| `GHOSTGIRL_VERSION` | `0.0.1` | Client version string |
| `REPO_MANIFEST_URL` | GitHub raw URL | Where to fetch `repo.ini` |
| `CACHE_DIR` | `Hdd:\GhostGirl\cache\` | Local download cache |
| `LOG_FILE` | `Hdd:\GhostGirl\ghostgirl.log` | Log output |
| `DEFAULT_INSTALL_ROOT` | `Hdd:\Apps\` | Fallback install path |
| `HTTP_USER_AGENT` | `GhostGirl/<version>` | Sent with network requests |
| `HTTP_TIMEOUT_MS` | `15000` | Network request timeout |

---

## Log File

**Location:** `Hdd:\GhostGirl\ghostgirl.log`

Contains:
- Network request results
- Parse warnings
- Install successes and failures

**Safe to delete.** A new log is created next launch.

---

## Cache Folder

**Location:** `Hdd:\GhostGirl\cache\`

Contains:
- Temporary downloads
- Partial downloads

**Safe to delete.** The client recreates it as needed.

---

## Reset to Defaults

To reset the client:

1. Delete `Hdd:\GhostGirl\` entirely
2. Relaunch the client

All settings return to defaults on next launch.

---

## Related

- [TUTORIAL.md](TUTORIAL.md) — full jailbreak walkthrough
- [TROUBLESHOOTING.md](TROUBLESHOOTING.md) — common problems
- [CONFIG.H reference](BUILDING.md) — developer docs
