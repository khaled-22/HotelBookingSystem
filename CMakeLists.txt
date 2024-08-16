cmake_minimum_required(VERSION 3.22)

project(HotelBookingSystem)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_TOOLCHAIN_FILE "C:/vcpkg/scripts/buildsystems/vcpkg.cmake")

# List all the necessary source and header files
add_executable(HotelBookingSystem
    src/main.cpp
    Model/Hotel.h
    Model/reserve.h
    View/Interface.h
    Controller/Logic.h
)
