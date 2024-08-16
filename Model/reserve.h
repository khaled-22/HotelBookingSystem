#pragma once
#include <vector>
#include <memory>
#include "hotel.h"

class Reserve
{
private:
    std::vector<std::shared_ptr<Hotel>> hotelList;

public:
    Reserve() = default;

    void addHotel(const std::shared_ptr<Hotel> &hotel)
    {
        hotelList.push_back(hotel);
    }

    std::vector<std::shared_ptr<Hotel>> getHotels() const
    {
        return hotelList;
    }

    std::shared_ptr<Hotel> findHotel(int roomNumber) const
    {
        for (const auto &hotel : hotelList)
        {
            if (hotel->getRoomNumber() == roomNumber)
            {
                return hotel;
            }
        }
        return nullptr; // Hotel not found
    }
};
