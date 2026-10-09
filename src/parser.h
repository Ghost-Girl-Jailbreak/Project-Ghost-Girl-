#pragma once

#include <string>
#include <vector>

struct AppEntry {
    std::string SectionName;
    std::string Title;
    std::string Author;
    std::string Version;
    std::string Size;
    std::string Category;
    std::string Description;
    std::string DownloadURL;
    std::string InstallPath;
    std::string Status;
    std::string Requires;
    std::string Checksum;
};

// Parses repo.ini content into a list of apps.
// Skips malformed entries and logs warnings.
std::vector<AppEntry> ParseManifest(const std::string& content);
