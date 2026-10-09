# Release Process

Internal checklist for publishing a new **GhostGirlRepack** release.
Follow these steps in order, every time.

---

## 1. Prepare the Package

1. Confirm all softmod files in `GhostGirlRepack/` are final.
2. Test on real hardware (ABadUpdate + ABadAvatar).
3. Update `CHANGELOG.md` in the repo with the new version.
4. Zip the `GhostGirlRepack` folder:

   **Linux / macOS:**
   ```
   zip -r GhostGirlRepack.zip GhostGirlRepack/
   ```

   **Windows:**
   - Right-click the `GhostGirlRepack` folder → Send to → Compressed folder

5. Confirm the zip extracts cleanly and contains the folder.

---

## 2. Decide the Version Number

Follow semantic versioning:

| Change Type | Version Bump | Example |
|---|---|---|
| Bug fix only | PATCH | `0.1.9` → `0.1.10` |
| New feature, backwards compatible | MINOR | `0.1.9` → `0.2.0` |
| Breaking change | MAJOR | `0.2.0` → `1.0.0` |

---

## 3. Create the GitHub Release

1. Go to repo → **Releases** → **Draft a new release**
2. **Tag:** `v<version>` (e.g. `v0.1.10`)
3. **Target:** `main`
4. **Title:** `GhostGirlRepack v<version>`
5. **Description:** Use the release notes template (see below)
6. **Attach asset:** Drag `GhostGirlRepack.zip` into the assets box
7. Check **"Set as the latest release"**
8. Click **Publish release**

---

## 4. Release Notes Template

Use the standard template from previous releases. Key sections:

- Download
- What Is This?
- What's New in vX.X.X
- Permanent Softmod Warning
- Quick Start
- Requirements
- Changelog link
- Known Issues
- Feedback

Never remove the Permanent Softmod Warning while permanent
softmod is still marked NOT recommended.

---

## 5. Post on Discord

Split the release notes into **two messages** under 2000 chars each.

**Message 1:** Download, What Is This, What's New, Warning
**Message 2:** Quick Start, Requirements, Known Issues, Feedback

Post in `#releases`. Pin message 1.

Attach the zip file directly if under 25MB (Discord's non-Nitro limit).
If larger, link to the GitHub release page.

---

## 6. Update the Main README (if needed)

If this release changes:

- Supported exploits → update **Supported Consoles**
- Requirements → update **Getting Started**
- Tutorial → update **`docs/TUTORIAL.md`**

---

## 7. Post-Release Checklist

- [ ] GitHub release is published and has the zip attached
- [ ] Discord release notes posted in `#releases`
- [ ] Message 1 pinned
- [ ] Changelog committed
- [ ] README updated if needed
- [ ] Announcement mentions any breaking changes clearly

---

## 8. Keep Old Releases

**Never delete old releases.** Users on older consoles or mid-troubleshooting may still need them. GitHub keeps them all — leave them alone.
