#include "parser.h"
#include <sstream>
#include <algorithm>

// NOTE: This is a plan-only implementation. It will compile
// once the XDK toolchain is available and std::string is
// verified compatible with the 360 SDK's STL build.

static std::string Trim(const std::string& s) {
    size_t start = s.find_first_not_of(" \t\r\n");
    size_t end   = s.find_last_not_of(" \t\r\n");
    if (start == std::string::npos) return "";
    return s.substr(start, end - start + 1);
}

std::vector<AppEntry> ParseManifest(const std::string& content) {
    std::vector<AppEntry> apps;
    std::istringstream stream(content);
    std::string line;

    AppEntry current;
    bool inSection = false;

    while (std::getline(stream, line)) {
        line = Trim(line);

        // Skip blanks and comments
        if (line.empty() || line[0] == ';' || line[0] == '#') continue;

        // New section
        if (line.front() == '[' && line.back() == ']') {
            if (inSection) apps.push_back(current);
            current = AppEntry();
            current.SectionName = line.substr(1, line.size() - 2);
            inSection = true;
            continue;
        }

        if (!inSection) continue;

        size_t eq = line.find('=');
        if (eq == std::string::npos) continue;

        std::string key   = Trim(line.substr(0, eq));
        std::string value = Trim(line.substr(eq + 1));

        if      (key == "Title")       current.Title       = value;
        else if (key == "Author")      current.Author      = value;
        else if (key == "Version")     current.Version     = value;
        else if (key == "Size")        current.Size        = value;
        else if (key == "Category")    current.Category    = value;
        else if (key == "Description") current.Description = value;
        else if (key == "DownloadURL") current.DownloadURL = value;
        else if (key == "InstallPath") current.InstallPath = value;
        else if (key == "Status")      current.Status      = value;
        else if (key == "Requires")    current.Requires    = value;
        else if (key == "Checksum")    current.Checksum    = value;
        // Unknown keys ignored silently (forward compatibility)
    }

    if (inSection) apps.push_back(current);
    return apps;
}
