# Security Policy

## Reporting a Vulnerability

If you find a security issue in Project Ghost Girl, please **do not**
open a public issue. Instead, report it privately.

**How to report:**
- Open a private security advisory on GitHub: [Report a vulnerability](../../security/advisories/new)
- Or contact the maintainer directly via GitHub: [@Ghost-Girl-Jailbreak](https://github.com/Ghost-Girl-Jailbreak)

Please include:
- A clear description of the issue
- Steps to reproduce
- The affected version
- Any proof-of-concept (if applicable)

## What Counts as a Security Issue

- Remote code execution through a malicious `repo.ini`
- Arbitrary file write via `InstallPath`
- Checksum bypass allowing tampered `.xex` files
- Man-in-the-middle on the manifest download
- Crashes that can be triggered remotely

## What Does NOT Count

- Issues that require physical access to the console
- Issues caused by other homebrew
- Feature requests

## Response Timeline

- **Acknowledgment:** within 7 days
- **Initial assessment:** within 14 days
- **Fix or mitigation:** depends on severity

## Scope

This policy covers the `Project-Ghost-Girl` client and the
`repo.ini` manifest format. Individual apps in `GhostGirl-App-<name>`
repos are the responsibility of their respective authors.

## Out of Scope

- The Xbox 360 itself or its official firmware
- Microsoft's XDK or tools
- Third-party homebrew not part of Project Ghost Girl
