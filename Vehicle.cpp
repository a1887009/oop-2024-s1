#include "Vehicle.h"
#include <iostream>
#include <ctime>


Vehicle::Vehicle(int ID){
    this->ID = ID;
    this->timeOfEntry = std::time(nullptr);
}

Vehicle::Vehicle() : Vehicle(1) {}

int Vehicle::getID() {return ID;}

int Vehicle::getParkingDuration() {
    int duration = std::difftime(std::time(nullptr), timeOfEntry);
    return duration;
}