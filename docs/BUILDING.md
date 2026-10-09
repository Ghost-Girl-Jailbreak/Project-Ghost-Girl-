# Building Project Ghost Girl

## Requirements

- Windows 10 or 11 (VM is fine)
- Visual Studio 2010
- Xbox 360 XDK (official, requires Microsoft developer access)
- A modded Xbox 360 for testing

## Why Not Linux?

The official XDK is Windows-only and integrates with Visual Studio 2010.
LibXenon can build on Linux but produces `.elf` files that most
dashboards don't launch directly — bad user experience for a store app.

## Build Steps (Once Set Up)

1. Open the `.sln` in Visual Studio 2010.
2. Set target to Xbox 360 (Debug or Release).
3. Build → produces `GhostGirl.xex`.
4. Copy `GhostGirl.xex` to the console via FTP or USB.
5. Launch through XeXMenu or Aurora.

## First Milestone

A "Hello World" `.xex` that fetches `repo.ini` and prints its
contents to screen. Everything else builds on this.

## Notes

- Visual Studio 2010 is required. Newer versions do not work with the XDK.
- The XDK is not publicly distributable — do not commit XDK files to this repo.
