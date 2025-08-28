cmake_minimum_required(VERSION 3.21)
project(SideScrollDemo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 3 REQUIRED COMPONENTS Graphics Window System)

add_executable(SideScrollDemo
    src/main.cpp
    src/Game.cpp
    src/Player.cpp
    src/Obstacle.cpp
)

target_include_directories(SideScrollDemo PRIVATE src)

target_link_libraries(SideScrollDemo PRIVATE
    SFML::Graphics
    SFML::Window
    SFML::System
)
