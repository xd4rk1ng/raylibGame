cmake_minimum_required(VERSION 3.31.1)
project(raylibGame VERSION 0.1.0 LANGUAGES C CXX)

set(TARGET_NAME Game)

list(APPEND CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/vcpkg_installed/x64-linux")

find_package(raylib CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)

include_directories()
file(GLOB SOURCES "src/*.cpp")
#file(GLOB INCLUDES "include/*.h")

add_executable(${TARGET_NAME} ${SOURCES})

target_include_directories(${TARGET_NAME} PRIVATE include)

target_link_libraries(${TARGET_NAME} PRIVATE raylib glfw)

#if(UNIX)
#    target_link_libraries(${TARGET_NAME} PRIVATE pthread m dl)
#endif()