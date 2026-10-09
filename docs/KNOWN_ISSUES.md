# Known Issues

Every known bug, limitation, and quirk in Project Ghost Girl.

**Before reporting a bug**, check this list. If it's already here,
don't open a duplicate issue — instead, add a 👍 reaction to the
linked GitHub issue if one exists.

Last updated: 2026

---

## 🔴 Critical

### Permanent softmod is untested on most revisions

**Status:** Open
**Affects:** All revisions
**Impact:** High

The permanent softmod method is **NOT recommended**. It may brick
consoles on untested revisions. Use the temporary USB method
instead.

**Workaround:** Use the temporary USB jailbreak (see [TUTORIAL.md](TUTORIAL.md)).

---

### Client (`GhostGirl.xex`) not yet available

**Status:** Open
**Affects:** All
**Impact:** High

The client app has not been built yet. It will be included in a
future release.

**Workaround:** None — watch the repo for updates.

---

## 🟠 Major

### Wi-Fi must be off during jailbreak

**Status:** By design
**Affects:** All
**Impact:** Medium

The console must have Wi-Fi disabled and Auto Sign-In off before
booting with the USB stick. If not, the exploit won't run.

**Workaround:** Follow [TUTORIAL.md](TUTORIAL.md) Step 4.

---

### Jailbreak is temporary only

**Status:** By design
**Affects:** All
**Impact:** Medium

The jailbreak only lasts as long as the console stays powered on.
After a full shutdown, you must repeat the USB boot process.

**Workaround:** None — this is intentional until permanent
softmod is stable.

---

### USB stick detection is picky

**Status:** Open
**Affects:** Some USB sticks
**Impact:** Medium

Some USB sticks don't get detected by the console, or work
inconsistently. USB 3.0 sticks often fail — USB 2.0 works better.

**Workaround:** Use a USB 2.0 stick, formatted to FAT32, under 32GB.

---

## 🟡 Minor

### Full tutorial not published yet

**Status:** Open
**Affects:** Documentation
**Impact:** Low

`docs/TUTORIAL.md` covers the main steps but the detailed
on-console walkthrough is still being written.

**Workaround:** Use the steps that are documented, or ask in Discord.

---

### Screenshots not available

**Status:** Open
**Affects:** Documentation
**Impact:** Low

No client screenshots exist yet because the client isn't built.

**Workaround:** None — check back later.

---

### Vote issue titles may be inconsistent

**Status:** Open
**Affects:** GitHub repo
**Impact:** Low

Some vote issues use inconsistent titles. This is cosmetic and
doesn't affect functionality.

**Workaround:** None needed.

---

## 🔵 Cosmetic

### No social preview image yet

**Status:** Open
**Affects:** GitHub repo
**Impact:** Low

The repo has no social preview image, so shares on Discord and
Twitter show a blank card.

**Workaround:** Upload `assets/social-preview.png` in repo settings.

---

## Fixed

Things that used to be broken.

*(Nothing yet — this section will grow as issues get resolved.)*

---

## Reporting a New Issue

If your issue isn't listed here:

1. Check [TROUBLESHOOTING.md](TROUBLESHOOTING.md)
2. Search [existing issues](../../issues)
3. Open a new issue with the `bug` label

Include:
- Console model and revision
- Exploit (ABadUpdate / ABadAvatar)
- GhostGirlRepack version
- Steps to reproduce
- Expected vs. actual behavior
