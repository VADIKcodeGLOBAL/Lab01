# Lab01 - Computer Management System

A C++ object-oriented application for managing a collection of computers with dynamic memory management, strict type checking, and robust copy semantics.

## Project Structure

- **`MyComputer.h` / `MyComputer.cpp`**: Defines the `MyComputer` class representing an individual computer component set (processor, motherboard, HDD, RAM, graphics card, DVD drive status).
- **`ComputerManager.h` / `ComputerManager.cpp`**: Manages a dynamic array of `MyComputer` instances. Implements the **Rule of Three** (destructor, copy constructor, and copy assignment operator with deep copying).
- **`main.h`**: Header file for supplementary definitions.
- **`main.cpp`**: Entry point containing the `main()` function, object initialization, and interactive menu launch.

## Features

- Dynamic array management with capacity handling.
- Safe **Rule of Three** implementation preventing double-free errors on copying.
- Search filters:
  - Find computers by minimum RAM size.
  - Filter computers with a DVD drive.
- Interactive user console menu.
