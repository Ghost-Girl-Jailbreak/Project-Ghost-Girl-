# Testing

> 🚧 **This document is a placeholder.** It will be filled in once
> the client (`.xex`) is built and there's something to test.

---

## Purpose

This document will explain:

- Which console revisions need testing
- Which exploits need testing
- What to check after each build
- How to report test results

---

## Planned Test Matrix

Once builds exist, each release should be tested on:

| Console | Revision | Exploit | Tester | Result |
|---|---|---|---|---|
| Xbox 360 S | Trinity | ABadUpdate | — | — |
| Xbox 360 S | Trinity | ABadAvatar | — | — |
| Xbox 360 S | Corona | ABadUpdate | — | — |
| Xbox 360 S | Corona | ABadAvatar | — | — |
| Xbox 360 S | Winchester | ABadUpdate | — | — |
| Xbox 360 S | Winchester | ABadAvatar | — | — |
| Xbox 360 E | Any | ABadUpdate | — | — |
| Xbox 360 E | Any | ABadAvatar | — | — |

---

## Planned Test Checklist

For each build:

### Jailbreak

- [ ] Console boots with USB stick inserted
- [ ] `abadavatar` profile appears
- [ ] Sign-in to `abadavatar` succeeds
- [ ] Jailbreak survives normal use

### Client

- [ ] Client launches without crashing
- [ ] App list loads
- [ ] App details show correctly
- [ ] Download begins and completes
- [ ] Install completes
- [ ] Installed app runs

### Edge Cases

- [ ] No internet connection
- [ ] USB stick removed during download
- [ ] Console powered off during install
- [ ] Corrupted manifest
- [ ] Missing app in repo

---

## How to Report Results

Once testing opens, use the **Compatibility Report** issue template.

Include:

- Console model and revision
- Exploit used
- `GhostGirlRepack` version
- What passed
- What failed
- Any error messages

---

## Current Status

No builds to test yet. This document will be updated when a
build exists.

---

## Related

- [COMPATIBILITY.md](COMPATIBILITY.md) — compatibility list
- [KNOWN_ISSUES.md](KNOWN_ISSUES.md) — known bugs
- [TROUBLESHOOTING.md](TROUBLESHOOTING.md) — common problems
