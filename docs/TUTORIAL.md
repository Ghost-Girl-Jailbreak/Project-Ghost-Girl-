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

If you see a `GhostGirlRepack` folder on your USB stick, delete it
and redo Step 3 by copying the **files inside** instead.

5. Do **not** rename any of the files after copying them.

---

## Step 4 — Safely Eject

1. Safely eject the USB stick from your PC.
2. Wait for the "safe to remove" confirmation.

---

## Step 5 — Plug Into Console

1. Power off your Xbox 360 completely.
2. Plug the USB stick into a USB port on the console.
3. Power on the console.

---

## Step 6 — Run the Exploit

> 🚧 **Steps coming soon.**

The on-console steps for running the exploit will be documented
here once verified on real hardware.

---

## Step 7 — Verify Install

After the process completes, check:

- [ ] The Ghost Girl client appears on your dashboard
- [ ] You can launch it
- [ ] You can browse the app list
- [ ] You can download and install an app

If any step fails, see Troubleshooting below.

---

## Troubleshooting

### Console does not detect the USB stick

- Confirm the stick is formatted to **FAT32**
- Try a different USB port
- Try a different USB stick
- Make sure the stick is not larger than 32GB (some consoles struggle with larger ones)

### Exploit does not run

- Confirm your console supports **ABadUpdate** or **ABadAvatar**
- Confirm the files are at the **root** of the USB stick, not inside a folder
- Re-copy the files from the `GhostGirlRepack` folder to the USB stick
- Confirm no files were renamed
- Confirm the folder structure matches Step 3

### Console freezes

- Power off, wait 30 seconds, power back on
- Try a different USB stick
- Try a different USB port

### Client launches but shows no apps

- Confirm your console has internet access
- Confirm `repo.ini` is reachable on GitHub
- Check the client log (if available)

---

## Still Stuck?

- Open an issue on GitHub with the `question` label
- Ask in the `#help` channel on Discord

Include:
- Console model
- Exploit (ABadUpdate / ABadAvatar)
- What step failed
- What you expected vs. what happened

---

## Credits

Tutorial maintained by the Project Ghost Girl team.
Contributions welcome via issue or Discord.
