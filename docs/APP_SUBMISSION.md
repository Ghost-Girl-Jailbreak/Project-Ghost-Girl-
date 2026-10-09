# App Submission

> 🚧 **App submissions are not open yet.** This document explains
> the process that will apply once submissions open.

---

## Overview

Project Ghost Girl lists apps in the master `repo.ini` manifest.
Each app lives in its own GitHub repo: `GhostGirl-App-<name>`.

This doc explains how to get your app listed.

---

## Requirements

Your app must:

- Be a working `.xex` file for Xbox 360
- Run on ABadUpdate and ABadAvatar setups
- Be your own work, or properly licensed
- Not include pirated content
- Not be malicious (no data theft, no bricking, no spyware)
- Have a public GitHub repo for hosting the `.xex`

---

## Submission Process (Planned)

1. **Open an issue** in the main repo with the `app-submission` label.
2. Provide:
   - App name
   - Author name
   - Short description
   - GitHub repo URL (containing the `.xex`)
   - Version number
   - Category (Emulator / Utility / Game / Other)
3. A maintainer reviews the app.
4. If approved, a `GhostGirl-App-<name>` repo is created (or yours is linked).
5. A section is added to `repo.ini`.
6. The app appears in the client on next refresh.

---

## What We Look For

- **Working** — it runs, doesn't crash on launch
- **Useful** — it does something meaningful
- **Safe** — no malicious behavior
- **Legally clean** — no piracy, no stolen assets

---

## What We Reject

- Apps that brick consoles
- Apps that steal data
- Apps that violate copyright
- Apps that require additional paid software
- Apps that are just ads or spam
- Duplicate apps

---

## Removal

Apps can be removed from the manifest at any time if:

- The author requests it
- The app is found to be malicious
- The app violates the license or law
- The app stops working reliably

Removal doesn't delete the app's GitHub repo — it just removes
the entry from `repo.ini`.

---

## Contact

Questions? Ask in the `#help` channel on Discord or open an
issue with the `question` label.
