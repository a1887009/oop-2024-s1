#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Motorbike.h"

Motorbike::Motorbike(int ID) : Vehicle(ID) {};

Motorbike::Motorbike() : Vehicle() {};

int Motorbike::getParkingDuration() {
    int duration = std::difftime(std::time(nullptr), timeOfEntry);
    return duration * 0.75;
}

