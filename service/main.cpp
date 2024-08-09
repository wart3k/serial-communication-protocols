#include <iostream>

#include "config.h"
#include "spdlog/spdlog.h"

int main() {
    spdlog::info("Starting Service: {}, Version v{}", project_name, project_version);
    spdlog::info("Using spdlog v{}.{}.{}", SPDLOG_VER_MAJOR, SPDLOG_VER_MINOR, SPDLOG_VER_PATCH);
    spdlog::info("That's it");

    return EXIT_SUCCESS;
}
