cmake_minimum_required(VERSION 3.15)
project(005)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(005
        .gitignore
        LICENSE
        README.md  005/005.c)

