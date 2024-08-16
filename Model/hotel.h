#pragma once

class Hotel {
private:
    int _roomNumber;
    int _beds;

public:
    Hotel(int roomNumber, int beds) 
        : _roomNumber{roomNumber}, _beds{beds} {}

    int getRoomNumber() const { return _roomNumber; }
    int getBeds() const { return _beds; }

    void setRoomNumber(int roomNumber) { _roomNumber = roomNumber; }
    void setBeds(int beds) { _beds = beds; }
};
