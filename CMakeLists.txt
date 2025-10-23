cmake_minimum_required(VERSION 4.1.2)

project(roguelike C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
 
set(SOURCES
    src/main.c
)

add_executable(${PROJECT_NAME} ${SOURCES})
