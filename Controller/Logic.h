#pragma once
#include "Model/reserve.h"
#include "View/interface.h"

class Controller
{
private:
    std::shared_ptr<Reserve> reserve;
    std::shared_ptr<View> view;

public:
    Controller(const std::shared_ptr<Reserve> &res, const std::shared_ptr<View> &v)
        : reserve{res}, view{v} {}

    void addHotel(int roomNumber, int beds)
    {
        reserve->addHotel(std::make_shared<Hotel>(roomNumber, beds));
        view->showMessage("Hotel added successfully.");
    }

    void listHotels()
    {
        view->showHotels(*reserve);
    }

    void showHotelDetails(int roomNumber)
    {
        auto hotel = reserve->findHotel(roomNumber);
        view->showHotelDetails(hotel);
    }
};
