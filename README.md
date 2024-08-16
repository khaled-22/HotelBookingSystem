# Hotel Booking System

## Overview

This project is a simple hotel booking system implemented in C++. It uses the Model-View-Controller (MVC) design pattern and incorporates smart pointers to handle memory management, adhering to the RAII (Resource Acquisition Is Initialization) programming technique.

## Project Structure

- **Model**: Contains the core logic and data structures for the booking system.
  - `Hotel.h`: Defines the `Hotel` class, representing individual hotels with room numbers and bed counts.
  - `Reserve.h`: Manages a collection of hotels and provides methods for adding and finding hotels.

- **View**: Handles the presentation layer, interacting with the user.
  - `View.h`: Defines the `View` class, which provides methods to display hotel information and messages.

- **Controller**: Acts as the intermediary between the Model and View.
  - `Controller.h`: Defines the `Controller` class, which manages interactions between the `Reserve` and `View` components.

- **Main**: The entry point of the application.
  - `main.cpp`: Initializes the application, sets up the `Reserve`, `View`, and `Controller` components, and handles user interactions.

## Building the Project

This project uses CMake for building. Follow these steps to compile and run the project:

1. **Install CMake**: Make sure CMake is installed on your system. You can download it from [CMake's official website](https://cmake.org/download/).

2. **Set Up CMake**: If you're using Vcpkg for dependency management, make sure it's correctly set up.

3. **Create a Build Directory**:
   ```sh
   mkdir build
   cd build

