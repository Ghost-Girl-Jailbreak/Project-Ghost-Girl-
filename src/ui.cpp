#include "ui.h"

// NOTE: Plan-only. Will use XUI or a custom Direct3D renderer
// once the XDK environment is ready.

void DrawAppList(const std::vector<AppEntry>& apps) {
    // Iterate apps, render Title + Version + Size
    // Handle controller input (up/down/select/back)
}

bool ConfirmInstall(const AppEntry& app) {
    // Render a yes/no prompt with app details
    return false;
}

void ShowStatus(const std::string& message) {
    // Render a centered status banner
}
