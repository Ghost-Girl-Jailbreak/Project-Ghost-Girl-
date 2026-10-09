// Project Ghost Girl — Client Config
// Compiled only with Xbox 360 XDK on Windows.

#pragma once

#define GHOSTGIRL_VERSION       "0.0.1"
#define GHOSTGIRL_NAME          "Project Ghost Girl"

// Master manifest URL (raw GitHub)
#define REPO_MANIFEST_URL \
    "https://raw.githubusercontent.com/Ghost-Girl-Jailbreak/Project-Ghost-Girl/main/repo/repo.ini"

// Local cache paths
#define CACHE_DIR               "Hdd:\\GhostGirl\\cache\\"
#define LOG_FILE                "Hdd:\\GhostGirl\\ghostgirl.log"

// Default install root if manifest entry is malformed
#define DEFAULT_INSTALL_ROOT    "Hdd:\\Apps\\"

// Network
#define HTTP_USER_AGENT         "GhostGirl/0.0.1"
#define HTTP_TIMEOUT_MS         15000
