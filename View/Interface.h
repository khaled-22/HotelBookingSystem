#pragma once
#include <iostream>
#include <memory>
#include "reserve.h"

class View {
public:
    void showHotels(const Reserve& reserve) {
        std::cout << "Available Hotels:\n";
        for (const auto& hotel : reserve.getHotels()) {
            std::cout << "Room Number: " << hotel->getRoomNumber() 
                      << ", Beds: " << hotel->getBeds() << '\n';
        }
    }

    void showHotelDetails(const std::shared_ptr<Hotel>& hotel) {
        if (hotel) {
            std::cout << "Details of Hotel:\n";
            std::cout << "Room Number: " << hotel->getRoomNumber() 
                      << ", Beds: " << hotel->getBeds() << '\n';
        } else {
            std::cout << "Hotel not found.\n";
        }
    }

    void showMessage(const std::string& message) {
        std::cout << message << '\n';
    }
};
