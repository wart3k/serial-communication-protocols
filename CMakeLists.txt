cmake_minimum_required(VERSION 3.28)
project(
        serial_communication_protocols
        VERSION                     0.0.1
        LANGUAGES                   C CXX)

# global cmake vars
set(CMAKE_CXX_STANDARD              20)
set(CMAKE_CXX_STANDARD_REQUIRED     ON)
set(CMAKE_CXX_EXTENSIONS            OFF)

set(CMAKE_C_STANDARD                11)
set(CMAKE_C_STANDARD_REQUIRED       ON)
set(CMAKE_C_EXTENSIONS              OFF)

set(EXECUTABLE_NAME serial_communication_protocols)

include(FetchContent)
FetchContent_Declare(
        spdlog
        GIT_REPOSITORY              https://github.com/gabime/spdlog.git
        GIT_TAG                     v1.14.1
        GIT_SHALLOW                 TRUE
)
FetchContent_MakeAvailable(spdlog)

add_subdirectory(configured)
#add_subdirectory(protocols)
add_subdirectory(service)
