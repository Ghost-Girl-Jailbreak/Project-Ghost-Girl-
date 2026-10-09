# Frequently Asked Questions

## General

### What is Project Ghost Girl?

A homebrew app store for modded consoles. Browse, download, and
install community apps directly from your console.

### Is it public yet?

No. Project Ghost Girl is still in active development. No builds
are available for download.

### When will it release?

No release date yet. Watch the repo for updates.

### Is it free?

Yes. Project Ghost Girl will always be free to use.

### Is it open source?

No. The source is public for viewing only. See `LICENSE`.
You may not copy, modify, or redistribute any part of it.

## Compatibility

### Which consoles are supported?

Right now, only jailbroken Xbox 360 consoles.

### Which Xbox 360 exploits work?

- ✅ ABadUpdate
- ✅ ABadAvatar
- ❌ Other RGH / JTAG (not yet)
- ❌ Stock consoles (not supported)

### Will it support PS4 / PS5 / Switch / etc.?

Maybe. Vote on the issues in the "Vote for the Next Console"
section of the README. The most-voted console gets considered
next after Xbox 360 support is stable.

### Will it work on my RGH console?

Not at the moment. Support is planned but not confirmed.

## Safety

### Is it safe?

The client itself is built to be safe, but you are installing
third-party apps. Only install apps you trust. See
`DISCLAIMER.md` for the full statement.

### Can I get banned?

Xbox 360 online services are largely shut down, but any online
activity on a modded console carries risk. Use common sense.

### Can it brick my console?

The client itself will not brick your console. A malicious or
buggy third-party app might cause issues. That's why we recommend
only installing apps from trusted sources.

### Does it phone home?

The client only contacts GitHub to fetch the manifest and app
files. No analytics, no tracking, no telemetry.

## Using the Store

### How do I install it?

Not available yet. Instructions will be in `docs/BUILDING.md`
once a public build exists.

### Where do apps get installed?

By default to `Hdd:\Apps\<AppName>\`. Each app's `InstallPath`
is defined in `repo.ini`.

### Can I host my own apps?

App repos are created and maintained by the Project Ghost Girl
team. If you want to submit an app, open an issue.

## Development

### Why is the toolchain Windows-only?

The official Xbox 360 XDK integrates with Visual Studio 2010 on
Windows. LibXenon exists for Linux, but produces `.elf` files that
most dashboards don't launch directly.

### Can I contribute code?

Not currently. See `CONTRIBUTING.md`.

### Can I help test?

Yes, once a build exists. Watch the repo for testing announcements.

## Legal

### Is this piracy?

No. Project Ghost Girl is for homebrew apps, not commercial games.

### Is this allowed?

Modding your own console is legal in many countries but not all.
Check your local laws.
