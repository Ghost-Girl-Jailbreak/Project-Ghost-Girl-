# Security Notes

How Project Ghost Girl handles security — both in the client and
in the distribution pipeline.

For reporting vulnerabilities, see [SECURITY.md](../SECURITY.md).

---

## What the Client Does

### Network Requests

The client makes **only** the following network requests:

1. **Fetch the manifest** from `raw.githubusercontent.com`
2. **Download app files** from `raw.githubusercontent.com`

That's it. No telemetry, no analytics, no tracking, no phone-home.

### Data Sent

When downloading a file, the client sends:

- An HTTP GET request
- A user agent string (`GhostGirl/<version>`)

**No personal data** is included. No console serial, no profile
name, no IP logging by us (GitHub may log IPs as part of normal
hosting — see GitHub's privacy policy).

### Data Stored

The client stores:

- Downloaded apps in `Hdd:\Apps\`
- A local cache in `Hdd:\GhostGirl\cache\`
- A log file in `Hdd:\GhostGirl\ghostgirl.log`

Users can delete any of these at any time.

---

## Integrity Verification

Each app entry in `repo.ini` can include a `Checksum` field
(SHA-256). If present, the client verifies the downloaded file
before installing.

If the checksum doesn't match:

- The install is **aborted**
- The download is deleted
- An error is logged

This protects against tampered or corrupted downloads.

**Currently optional.** It will become required once the client
is stable.

---

## HTTPS

The client fetches from `raw.githubusercontent.com` over HTTPS.
This encrypts traffic between the console and GitHub, preventing
man-in-the-middle tampering during download.

> **Note:** The Xbox 360's SSL support is old and may struggle
> with modern TLS versions. If HTTPS fails, the client may fall
> back to HTTP — which is less secure. This is a known limitation
> and will be documented in the client.

---

## Trust Model

Project Ghost Girl **trusts GitHub** as the source of truth.

- If GitHub is compromised, the manifest is compromised
- If your GitHub org account is compromised, attackers could push a malicious manifest
- If an app author's repo is compromised, that app could be malicious

**Recommended mitigations for users:**

- Only install apps you recognize
- Check that checksums are present
- Report anything suspicious

**Recommended mitigations for the maintainer:**

- Enable 2FA on the GitHub org
- Review PRs carefully
- Never push directly to `main` without testing

---

## What We Do NOT Do

- ❌ No analytics or telemetry
- ❌ No tracking pixels
- ❌ No unique user IDs
- ❌ No account system
- ❌ No ads
- ❌ No data selling
- ❌ No third-party SDKs

---

## What We Can't Guarantee

- **Third-party apps** are not reviewed by us. They may be malicious
- **Your console's security** is only as good as the exploit you use
- **Your network** may be monitored by your ISP or others

Modding a console always involves trust. Read the
[DISCLAIMER](../DISCLAIMER.md) for the full statement.

---

## Reporting a Security Issue

Do **not** open a public issue. See [SECURITY.md](../SECURITY.md)
for the private reporting process.
