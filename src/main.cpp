#include <iostream>
#include "Controller/Logic.h"
#include "View/Interface.h"

int main() {
    auto reserve = std::make_shared<Reserve>();
    auto view = std::make_shared<View>();
    Controller controller(reserve, view);

    // Adding some hotels
    controller.addHotel(101, 2);
    controller.addHotel(102, 3);
    controller.addHotel(103, 1);

    // Listing all hotels
    controller.listHotels();

    // Showing details of a specific hotel
    int roomNumber;
    std::cout << "Enter room number to view details: ";
    std::cin >> roomNumber;
    controller.showHotelDetails(roomNumber);

    return 0;
}
