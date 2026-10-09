#pragma once

#include "parser.h"
#include <vector>

// Draws the main app list screen.
void DrawAppList(const std::vector<AppEntry>& apps);

// Shows a modal confirming install of the selected app.
bool ConfirmInstall(const AppEntry& app);

// Shows a simple status message (e.g. "Downloading...").
void ShowStatus(const std::string& message);
