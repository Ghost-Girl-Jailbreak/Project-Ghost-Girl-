# File Layout

The official reference for what's inside `GhostGirlRepack` and how
it should look on your USB stick.

If any other document in this repo disagrees with this one, **this
file wins**. It is the single source of truth for folder structure.

---

## Inside `GhostGirlRepack.zip`

After extracting the zip, you get a folder called `GhostGirlRepack`
containing:

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

**Total:** 4 folders + 11 files.

---

## Correct USB Layout

After copying, the root of your USB stick should look exactly like
the contents of the folder — **not** wrapped in a `GhostGirlRepack`
folder.

### ✅ Correct

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

### ❌ Wrong

```
USB:\
└── GhostGirlRepack\              ← WRONG
     ├── Apps/
     ├── HvP2.xex
     └── ...
```

If you see a `GhostGirlRepack` folder on your USB stick, delete it
and redo Step 3 of the tutorial by copying the **files inside**
instead.

---

## Why This Matters

The exploit expects files at the **root** of the USB stick. If they
sit inside a `GhostGirlRepack` folder, the console won't find them
and the exploit will fail silently.

---

## Quick Fix

If your USB stick currently has a `GhostGirlRepack` folder:

1. Open the `GhostGirlRepack` folder.
2. Select all items inside.
3. Cut them.
4. Paste them at the root of the USB stick.
5. Delete the now-empty `GhostGirlRepack` folder.

---

## Related

- [Tutorial](TUTORIAL.md) — full softmod walkthrough
- [Troubleshooting](TROUBLESHOOTING.md) — if the exploit doesn't run
