# Naming Reference

Official names used across Project Ghost Girl. Use these exactly
when referring to files, folders, repos, or releases.

---

## Files

| Name | What It Is |
|---|---|
| `GhostGirlRepack.zip` | The softmod package users download |
| `GhostGirlRepack` | The folder inside the zip |
| `GhostGirl.xex` | The future client app |
| `repo.ini` | The master app manifest |
| `GhostGirlmod.zip` | ❌ Deprecated — do not use |

**Rule:** The download is `GhostGirlRepack.zip`. The folder inside is
`GhostGirlRepack`. Never `GhostGirlmod`.

---

## Folders Inside the Package

| Name | Notes |
|---|---|
| `Apps/` | Homebrew apps |
| `BadUpdatePayload/` | ABadUpdate payload |
| `Content/` | Content files |
| `Dash/` | Dashboard files |

---

## Repositories

| Repo | Purpose |
|---|---|
| `Project-Ghost-Girl` | Main repo — client, manifest, docs |
| `GhostGirl-App-<name>` | One repo per app |

**Rule:** App repos use the `GhostGirl-App-` prefix, followed by the
app's name in PascalCase. Example: `GhostGirl-App-SuperEmulator`.

---

## Release Tags

| Format | Example |
|---|---|
| `v<major>.<minor>.<patch>` | `v0.1.9` |
| `v<major>.<minor>.<patch>` | `v0.2.0` |

**Rule:** Tags always start with `v`. Never `V0.1.9` or `0.1.9`.

---

## Release Titles

| Format | Example |
|---|---|
| `GhostGirlRepack v<version>` | `GhostGirlRepack v0.1.9` |

**Rule:** Never change the prefix. It's `GhostGirlRepack vX.X.X`.

---

## GitHub Org

| Name | URL |
|---|---|
| `Ghost-Girl-Jailbreak` | github.com/Ghost-Girl-Jailbreak |

**Rule:** One org for the whole project. All repos live under it.

---

## Discord

| Name | Value |
|---|---|
| Invite | `discord.gg/2YFyMqP6Te` |

**Rule:** Never post private invites publicly. This link is the only
official one.

---

## Branding

| Name | Use |
|---|---|
| **Project Ghost Girl** | Full project name |
| **Ghost Girl** | Short form |
| **GhostGirl** | Only in filenames and code |
| **GhostGirlRepack** | Only for the softmod package |

**Rule:** In prose, always write "Project Ghost Girl" or "Ghost Girl"
with a space. Never "GhostGirl" alone in prose — reserve the
no-space form for technical names.

---

## When In Doubt

If you're about to name something new and you're unsure which
convention to follow, open an issue or ask in Discord. Better to
ask once than to break links later.
