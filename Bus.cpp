#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"

Bus::Bus(int ID) : Vehicle(ID) {};

Bus::Bus() : Vehicle() {};

int Bus::getParkingDuration() {
    int duration = std::difftime(std::time(nullptr), timeOfEntry);
    return duration * 0.75;
}

