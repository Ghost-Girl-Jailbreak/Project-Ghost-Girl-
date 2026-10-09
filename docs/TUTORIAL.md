# Project Ghost Girl — Softmod Tutorial

> 🚧 **This tutorial is a work in progress.** Steps will be filled
> in as they are tested on real hardware. Check back for updates.

---

## Overview

This guide walks you through soft-modding your Xbox 360 using
the **GhostGirlRepack** package and a USB stick.

By the end, you will have:

- A soft-modded Xbox 360
- The Ghost Girl client available on your dashboard
- Access to the homebrew app store

---

## Before You Begin

### ✅ Check Your Console

Your console must support one of these exploits:

- **ABadUpdate**
- **ABadAvatar**

If it doesn't, this tutorial won't work for you yet.

### ✅ What You Need

| Item | Notes |
|---|---|
| Xbox 360 console | Jailbreakable, see above |
| USB stick | Formatted to FAT32 |
| PC | To prepare the USB stick |
| `GhostGirlRepack.zip` | From the Releases page |
| Patience | This may take 20-30 minutes |

### ⚠️ Before You Start

- **Back up your saves.** Use cloud saves or a separate USB stick.
- **Read the [DISCLAIMER](../DISCLAIMER.md).** Modding voids warranties.
- **Do not unplug the console** during the process.
- **Permanent softmod is NOT recommended** right now. Use the temporary USB method.

---

## Step 1 — Prepare the USB Stick

1. Insert a USB stick into your PC.
2. Back up anything important already on it.
3. Format it to **FAT32**:

   **Windows:**
   - Open File Explorer
   - Right-click the USB drive → Format
   - File system: **FAT32**
   - Click Start

   **Linux:**
   ```
   sudo mkfs.vfat -F 32 /dev/sdX
   ```
   Replace `sdX` with your USB device (check with `lsblk`).

   **macOS:**
   - Open Disk Utility
   - Select the USB drive
   - Erase → Format: **MS-DOS (FAT)**
   - Click Erase

4. Confirm the format completed successfully.

---

## Step 2 — Extract GhostGirlRepack

1. Download `GhostGirlRepack.zip` from the [Releases](../../releases) page.
2. Extract it on your PC.
3. Inside, you'll find a folder named **`GhostGirlRepack`**.
4. Open that folder.

### 📂 What's Inside the Folder

You should see these files and folders:

```
GhostGirlRepack/
├── Apps/                          ← folder
├── BadUpdatePayload/              ← folder
├── Content/                       ← folder
├── Dash/                          ← folder
├── HvP2.xex
├── JRPC2.ini
├── JRPC2.xex
├── launch.ini
├── name.txt
├── README - Credz and sources.txt
├── README - GhostGirlRepack.txt
├── README - XeUnshackle.txt
├── RPC.xex
├── xbdm.ini
└── Xbdm.xex
```

If your folder doesn't match this, re-extract the zip before continuing.

---

## Step 3 — Copy Files to USB

1. **Open the `GhostGirlRepack` folder.**
2. **Select ALL items inside** — both the folders and the loose files.
3. **Copy them.**
4. **Paste them directly onto the root of the USB stick.**

   ⚠️ **Important:** Do **not** copy the `GhostGirlRepack` folder itself.
   Only copy the **contents inside it**.

### ✅ Correct USB Layout

```
USB:\
├── Apps/
├── BadUpdatePayload/
├── Content/
├── Dash/
├── HvP2.xex
├── JRPC2.ini
├── JRPC2.xex
├── launch.ini
├── name.txt
├── README - Credz and sources.txt
├── README - GhostGirlRepack.txt
├── README - XeUnshackle.txt
├── RPC.xex
├── xbdm.ini
└── Xbdm.xex
```

### ❌ Wrong USB Layout

```
USB:\
└── GhostGirlRepack\              ← WRONG
     ├── Apps/
     ├── HvP2.xex
     └── ...
```

5. Do **not** rename any of the files after copying them.
6. Safely eject the USB stick.

---

## Step 4 — Prepare Console Settings ⚠️ IMPORTANT

**Before plugging the USB stick into the console**, you must
change two settings. If you skip this, the jailbreak will not
work.

### 4.1 — Turn Off Wi-Fi

1. Power on the console **without** the USB stick inserted.
2. Go to **Settings** → **System** → **Network Settings**
3. Disconnect from any wireless network.
4. Turn the Wi-Fi off completely.

**Why:** The console must not connect to the internet while the
exploit runs.

### 4.2 — Turn Off Auto Sign-In

1. Go to **Settings** → **System** → **Console Settings** →
   **Startup and Shutdown**
2. Set **Auto Sign-In** to **Off**.

**Why:** The exploit needs the console to sit at the sign-in
screen without auto-logging into a profile.

### 4.3 — Power Off the Console

1. Once both settings are off, shut down the console completely.
2. Wait **30 seconds**.
3. Make sure the console is fully off (no orange light, no fan).

---

## Step 5 — Plug In USB & Boot Console

⚠️ **Follow these steps in exact order.** Timing matters.

1. With the console **fully off**, plug the USB stick into the
   USB port **closest to the power button**.
   - On most Xbox 360 S models, that's the **front-left** port.
   - If unsure, use the port nearest the power button.

2. **Wait 5 seconds.** Do not press anything yet.

3. Press the **power button** on the console to turn it on.

4. **Wait.** The console will boot and the jailbreak will run
   automatically.

5. A profile named **`abadavatar`** will appear on the sign-in
   screen.

6. Click the **`abadavatar`** profile to log in.

7. If everything worked, your console is now jailbroken. ✅

> 💡 **Note:** If the console boots normally without the
> `abadavatar` profile appearing, something went wrong. See
> [TROUBLESHOOTING.md](TROUBLESHOOTING.md).

---

## Step 6 — Verify Install

After the jailbreak completes, check:

- [ ] The console booted with the `abadavatar` profile visible
- [ ] You can sign in to that profile
- [ ] The Ghost Girl client appears on your dashboard
- [ ] You can launch it
- [ ] You can browse the app list
- [ ] You can download and install an app

If any step fails, see [TROUBLESHOOTING.md](TROUBLESHOOTING.md).

---

## Step 7 — Keeping It Jailbroken

The jailbreak is **temporary** — it only lasts as long as the
console stays on. When you power off, you'll need to repeat
Steps 4 and 5 to re-jailbreak. And aslong as the usb stick is in it will keep jailbreaking its self

> **Note:** Permanent softmod is possible with GhostGirlRepack
> but **NOT recommended** at the moment. See the warning at the
> top of this guide.

---

## Next Steps

Once your console is jailbroken:

- Browse the store for apps
- Vote on future console support (see README)
- Join the Discord for help and updates

---

## Still Stuck?

- Open an issue on GitHub with the `question` label
- Ask in the `#help` channel on Discord

Include:
- Console model and revision
- What step failed
- What you expected vs. what happened

---

## Credits

Tutorial maintained by the Project Ghost Girl team.
Contributions welcome via issue or Discord.
