#pragma once

#include <string>

// Downloads a file from a URL and saves it to savePath.
// Returns true on success.
bool DownloadFile(const std::string& url, const std::string& savePath);

// Fetches a text file (used for repo.ini) into outContent.
bool FetchText(const std::string& url, std::string& outContent);
