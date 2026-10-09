#include "downloader.h"
#include "config.h"

// NOTE: Plan-only. Will be implemented with XHttp / XContent
// once the XDK environment is set up.

bool FetchText(const std::string& url, std::string& outContent) {
    // 1. XHttpOpen session
    // 2. XHttpConnect to host
    // 3. XHttpOpenRequest (GET)
    // 4. XHttpSendRequest
    // 5. Read response into outContent
    // 6. Close handles
    return false;
}

bool DownloadFile(const std::string& url, const std::string& savePath) {
    // 1. FetchText-style request, but binary-safe
    // 2. CreateFile(savePath, GENERIC_WRITE)
    // 3. WriteFile in chunks
    // 4. CloseHandle
    return false;
}
