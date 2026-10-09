# Changelog Guide

How Project Ghost Girl versions things and how to write changelog
entries.

---

## Versioning

Project Ghost Girl uses **semantic versioning**:

```
MAJOR.MINOR.PATCH
```

| Segment | When to Bump | Example |
|---|---|---|
| **MAJOR** | Breaking changes | `0.9.0` → `1.0.0` |
| **MINOR** | New features, backwards compatible | `0.1.9` → `0.2.0` |
| **PATCH** | Bug fixes only | `0.1.9` → `0.1.10` |

Currently in **early development** (0.x.x). Expect rapid changes.

---

## Changelog Format

Follow [Keep a Changelog](https://keepachangelog.com/).

Each version gets a section with these headings (only include
ones that apply):

- **Added** — new features
- **Changed** — changes to existing behavior
- **Deprecated** — features marked for removal
- **Removed** — features removed
- **Fixed** — bug fixes
- **Security** — security-related changes

---

## Example Entry

```markdown
## [0.1.9] - 2026-XX-XX

### Added
- Support for ABadAvatar on Corona consoles
- Install guide included in GhostGirlRepack

### Changed
- Reordered Quick Start steps for clarity

### Fixed
- USB detection issue on certain stick models

### Security
- Verified no telemetry is sent to external servers
```

---

## Rules

1. One section per version, newest at the top
2. Always include a date in `YYYY-MM-DD` format
3. Keep entries short — one line each
4. Don't remove old entries
5. Link to the release tag if applicable

---

## Unreleased Section

Changes that aren't published yet go under `[Unreleased]` at the
top. When you cut a release, move them under the new version
number and add the date.

---

## Who Updates It

Right now, only the maintainer. Contributors should not edit
the changelog directly — mention the change in your issue or PR
and it will be added.
