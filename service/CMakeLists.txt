set(EXECUTABLE_SOURCES
        "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp")

add_executable(${EXECUTABLE_NAME} ${EXECUTABLE_SOURCES})

target_include_directories(${EXECUTABLE_NAME} PUBLIC
        "${CMAKE_BINARY_DIR}/configured_files"
)

target_link_libraries(
        ${EXECUTABLE_NAME} PRIVATE
        spdlog::spdlog
)