# ReaXtension: REAPER C++ Extension Template

This repository provides a foundational template for developing C++ extensions for Cockos REAPER, the Digital Audio Workstation. It offers a pre-configured project structure to kickstart the creation of custom functionalities for REAPER.

## Summary

The template comes with the following key components:

* **CMake Build System:** Configured with `CMakeLists.txt` files to enable cross-platform compilation of your extension.
* **REAPER SDK Integration:** The project is set up to link against the necessary [REAPER SDK](https://github.com/justinfrankel/reaper-sdk) components as provided by Cockos, which are all placed in the `sdk` folder.
* **Main Entry Point:** The file `src/main.cpp` serves as the **entry point** for your REAPER extension.

## Setup

Simply open **`CMakeLists.txt`** and **carefully review the instructions and variables** to properly configure the build environment. It is recommended to use CLion, but any IDE or code editor with CMake support will work well.
