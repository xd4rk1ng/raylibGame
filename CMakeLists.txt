cmake_minimum_required(VERSION 3.31.1)
project(raylibGame VERSION 0.1.0 LANGUAGES C CXX)


# -------------------------------
# Platform-specifc
# -------------------------------
if(WIN32)
    message(STATUS "Configuring for Windows")
    set(VCPKG_TRIPLET "x64-windows")
    set(TARGET_NAME Game.exe)
elseif(UNIX)
    message(STATUS "Configuring for Linux/Unix")
    set(VCPKG_TRIPLET "x64-linux")
endif()


list(APPEND CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/vcpkg_installed/${VCPKG_TRIPLET}")


# --------------------------------
# Dependencies
# --------------------------------
find_package(raylib CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)


# --------------------------------
# Source files
# --------------------------------
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "include/*.h")

add_executable(${TARGET_NAME} ${SOURCES})

target_include_directories(${TARGET_NAME} PRIVATE include)

# --------------------------------
# Link Libraries
# --------------------------------
target_link_libraries(${TARGET_NAME} PRIVATE raylib glfw)

# Extra platform-specific system libs
if (WIN32)
    target_link_libraries(${TARGET_NAME} PRIVATE winmm) # Windows Multimedia Library
elseif (UNIX)
    target_link_libraries(${TARGET_NAME} PRIVATE pthread m dl) # Linux media and math Libraries
endif()

# -------------------------------------------------------------
# Compiler settings
# -------------------------------------------------------------
set_target_properties(${TARGET_NAME} PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
)