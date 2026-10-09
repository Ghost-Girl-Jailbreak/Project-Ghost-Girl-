#include "config.h"
#include "parser.h"
#include "downloader.h"
#include "ui.h"

#include <string>
#include <vector>

// NOTE: Plan-only. Will compile under XDK once available.

int main() {
    // 1. Init network stack (XNetStartup)
    // 2. Fetch REPO_MANIFEST_URL into a string
    std::string manifest;
    if (!FetchText(REPO_MANIFEST_URL, manifest)) {
        ShowStatus("Failed to fetch manifest.");
        return 1;
    }

    // 3. Parse manifest
    std::vector<AppEntry> apps = ParseManifest(manifest);

    // 4. Main loop: draw list, handle input
    DrawAppList(apps);

    // 5. On selection: ConfirmInstall -> DownloadFile -> install
    return 0;
}
