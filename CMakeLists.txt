cmake_minimum_required(VERSION 3.10.0)
project(3DShooter VERSION 0.1.0 LANGUAGES C CXX)

include(FetchContent)

set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(BUILD_GAMES    OFF CACHE BOOL "" FORCE)

FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG        master # Or use a fixed version tag like "5.0"
)

FetchContent_MakeAvailable(raylib)

add_executable(3DShooter main.cpp
    src/Engine/engine.cpp
    src/Engine/engine.hpp
    src/Engine/Render/render.cpp
    src/Engine/Render/render.hpp)

target_link_libraries(${PROJECT_NAME} PRIVATE raylib)