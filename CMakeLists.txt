# Copyright 2024 Matheus Vilano
# SPDX-License-Identifier: Apache-2.0

# Project Settings
cmake_minimum_required(VERSION 3.26)  # Avoid changing this CMake version, as it might break this pipeline.
set(EXTENSION_NAME ReaperExtension)  # TODO: Update this line with your extension (or project) name.
project(${EXTENSION_NAME})

# C++ Standard
set(CMAKE_CXX_STANDARD 17)  # Higher than C++17 is not recommended, as REAPER might not support latest C++ features.
set(CMAKE_CXX_STANDARD_REQUIRED True)  # Do not change this. It is best to enforce the C++ standard specified above.

# Include Files
include_directories(  # Header (.h) files to include.
        ${PROJECT_SOURCE_DIR}/sdk
        # You may add more files or directories as needed. One per line.
)

# Implementation Files
file(GLOB_RECURSE SOURCES
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        # You may add more patterns as needed. One per line.
)  # May be removed if managing dependencies manually (e.g using `set`).

# DLL Settings
set(OUTPUT_NAME reaper_extension)  # TODO: Define how to name the generated DLL. Use the `snake_case` naming convention.
set(OUTPUT_DIR ${PROJECT_SOURCE_DIR}/bin)  # You may change the output directory. This is entirely optional.

# DLL Generation
add_library(${EXTENSION_NAME} SHARED ${SOURCES})
set_target_properties(${EXTENSION_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR} OUTPUT_NAME ${OUTPUT_NAME})

# Link Libraries
target_link_libraries(${EXTENSION_NAME} PRIVATE
        user32
        gdi32
        winmm
        kernel32
        user32
        gdi32
        winspool
        shell32
        ole32
        oleaut32
        uuid
        comdlg32
        advapi32
        # If you are using any additional libraries, you should link them here.
)
