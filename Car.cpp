#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"

Car::Car(int ID) : Vehicle(ID) {};

Car::Car() : Vehicle() {};

int Car::getParkingDuration() {
    int duration = std::difftime(std::time(nullptr), timeOfEntry);
    return duration * 0.9;
}


