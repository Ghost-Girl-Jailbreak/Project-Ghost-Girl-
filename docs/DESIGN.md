# Design

Sketches and notes for the Project Ghost Girl client UI.

> 🚧 This is a planning document. Screenshots will be added
> once the client is functional.

---

## Design Principles

- **Simple** — should work with a controller, no keyboard needed
- **Fast** — list loads in under 2 seconds
- **Readable** — works on a TV from couch distance
- **Consistent** — same look across every screen
- **Dark themed** — matches the Project Ghost Girl brand

---

## Color Palette

| Role | Color | Hex |
|---|---|---|
| Background | Deep black | `#0d0d0d` |
| Primary | Galaxy purple | `#8a2be2` |
| Secondary | Dark purple | `#4b0082` |
| Accent | Violet | `#6a0dad` |
| Text | Light lavender | `#c9a7ff` |
| Text (muted) | Grey | `#888888` |

---

## Screens

### 1. Splash Screen

- Project Ghost Girl logo
- Loading spinner
- Version number at bottom

### 2. Main App List

- Vertical list of apps
- Each row shows: icon, title, version, size
- Selected row highlighted in purple
- Footer: controls hint (A = select, B = back)

### 3. App Detail View

- Large app title
- Author, version, size, category
- Description
- Install button
- Back button

### 4. Download Screen

- App name
- Progress bar
- Speed and ETA
- Cancel button

### 5. Install Complete

- Success message
- "Launch now" and "Back to list" options

### 6. Error Screen

- What went wrong
- Short explanation
- Back button

### 7. Settings (Future)

- Update manifest
- Clear cache
- About

---

## Controller Mapping

| Button | Action |
|---|---|
| D-Pad Up/Down | Navigate list |
| A | Select / Confirm |
| B | Back / Cancel |
| Y | Refresh |
| Start | Settings |
| Back | Exit app |

---

## Typography

- **Titles:** 32px bold
- **Body:** 20px regular
- **Small text:** 16px regular
- **Font:** System default or a clean sans-serif

---

## Layout Grid

- Safe area: 5% margin from all edges
- Max list width: 80% of screen
- Row height: 60px
- Spacing: 8px between rows

---

## Notes for the Developer

When the XDK environment is ready, this document will be used
as a reference for building the actual UI in Direct3D or XUI.
