# Troubleshooting

Common problems and how to fix them.

If your issue isn't listed here, see the **Still Stuck?** section
at the bottom.

---

## USB & File Issues

### Console does not detect the USB stick

**Check:**

- Is the stick formatted to **FAT32**? (exFAT and NTFS won't work)
- Try a **different USB port** on the console
- Try a **different USB stick**
- Is the stick larger than **32GB**? Some consoles struggle with large drives
- Is the stick fully inserted? Push it in until it clicks

**Fix:**

1. Format the USB stick again to FAT32
2. Re-copy the files from `GhostGirlRepack`
3. Safely eject and reinsert

---

### Files are inside a `GhostGirlRepack` folder on the USB

This is the most common mistake.

**Fix:**

1. Open the `GhostGirlRepack` folder on the USB stick
2. Select **all items inside**
3. Cut them
4. Paste them at the **root** of the USB stick
5. Delete the now-empty `GhostGirlRepack` folder

See [FILE_LAYOUT.md](FILE_LAYOUT.md) for the correct layout.

---

### Files were renamed

The exploit expects exact filenames. If Windows or macOS added
`(1)` or changed capitalization, it won't work.

**Fix:**

1. Delete everything from the USB stick
2. Re-copy from the original `GhostGirlRepack` folder
3. Do not rename anything

---

## Exploit Issues

### Exploit does not run

**Check:**

- Does your console support **ABadUpdate** or **ABadAvatar**? See [COMPATIBILITY.md](COMPATIBILITY.md)
- Are files at the **root** of the USB stick, not inside a folder?
- Are any files renamed?
- Is the USB formatted to FAT32?

**Fix:**

1. Re-extract `GhostGirlRepack.zip`
2. Re-copy files to USB (contents only, not the folder)
3. Safely eject
4. Power off the console, wait 30 seconds, try again

---

### Console freezes

**Fix:**

1. Power off completely (hold the power button for 10 seconds)
2. Unplug the USB stick
3. Wait 30 seconds
4. Reinsert the USB stick
5. Power on

If it keeps freezing:

- Try a **different USB stick**
- Try a **different USB port**
- Try a **different console** if you have one

---

### Exploit runs but nothing happens

**Check:**

- Did the console reboot or return to the dashboard?
- Is there an error message on screen?

**Fix:**

1. Re-extract and re-copy all files
2. Try a slower or smaller USB stick
3. Try a USB 2.0 stick if you're using USB 3.0

---

## Client Issues

### Client launches but shows no apps

**Check:**

- Does your console have internet access?
- Can you reach `raw.githubusercontent.com` from another device?

**Fix:**

- Wait a few minutes and retry
- Restart the client
- Check the client log (if available)

---

### Client crashes on launch

**Check:**

- Is your console on a supported revision? See [COMPATIBILITY.md](COMPATIBILITY.md)
- Did you install it correctly?

**Fix:**

- Reinstall the client
- Try launching with the USB stick removed

---

### App downloads but won't install

**Check:**

- Is `InstallPath` valid in `repo.ini`?
- Is there enough free space on the console?
- Is the download complete?

**Fix:**

- Try a different app to confirm the client works
- Reinstall the client

## Jailbreak Issues

### `abadavatar` profile does not appear

**Check:**

- Did you **turn off Wi-Fi** before booting? (See Step 4.1)
- Did you **turn off Auto Sign-In**? (See Step 4.2)
- Did you wait **30 seconds** after powering off?
- Did you wait **5 seconds** after inserting the USB stick before powering on?
- Is the USB stick in the **port closest to the power button**?
- Are the files at the **root** of the USB stick (not in a `GhostGirlRepack` folder)?
- Are any files renamed?

**Fix:**

1. Power off completely
2. Wait 30 seconds
3. Confirm Wi-Fi is off and Auto Sign-In is off
4. Remove the USB stick, then reinsert it into the port closest to the power button
5. Wait 5 seconds
6. Power on
7. Wait for `abadavatar` to appear

---

### Console boots normally but nothing happens

**Cause:** The USB stick is not being detected, or the timing was off.

**Fix:**

1. Power off and wait 30 seconds
2. Try a different USB port (still the one closest to the power button if possible)
3. Try a different USB stick (FAT32, smaller than 32GB)
4. Re-copy files from `GhostGirlRepack` — contents only, not the folder

---

### `abadavatar` profile appears but sign-in fails

**Fix:**

1. Power off and wait 30 seconds
2. Power back on and try again
3. If it keeps failing, re-extract `GhostGirlRepack.zip` and re-copy the files

---

### Console signs into my normal profile instead of `abadavatar`

**Cause:** Auto Sign-In is still on.

**Fix:**

1. Go to Settings → System → Console Settings → Startup and Shutdown
2. Set Auto Sign-In to **Off**
3. Power off, wait 30 seconds
4. Follow Step 5 again

---

### Jailbreak works but Wi-Fi won't connect afterward

**Cause:** Some exploits conflict with network services if Wi-Fi is enabled during boot.

**Fix:**

1. Reboot the console without the USB stick
2. Re-enable Wi-Fi manually
3. You may need to re-jailbreak if you want to use online features

---

### Console freezes during jailbreak

**Fix:**

1. Hold the power button for 10 seconds to force power off
2. Unplug the USB stick
3. Wait 30 seconds
4. Reinsert and try again
5. If it keeps freezing, try a different USB stick
 ---

## Still Stuck?

Open an issue or ask in Discord. Include:

- **Console model and revision** (Trinity / Corona / Winchester)
- **Exploit** (ABadUpdate / ABadAvatar)
- **GhostGirlRepack version** (e.g. v0.1.9)
- **What you did** — steps to reproduce
- **What you expected** vs. **what happened**
- **Any error messages** (screenshots help)

- 🐛 [Open an issue](../../issues/new)
- 💬 [Join the Discord](https://discord.gg/2YFyMqP6Te)
