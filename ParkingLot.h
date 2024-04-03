#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <iostream>
#include <ctime>
#include "Vehicle.h"



class ParkingLot {
    private:
        Vehicle** vehicles;
        int capacity;
        int numParkedVehicles;

    public:
        ParkingLot(int capacity);

        bool parkVehicle(Vehicle* vehicle);

        bool unparkVehicle(int ID);

        int getCapacity();

        int getCount();

        int countOverstayingVehicles(int maxParkingDuration);

};

#endif // PARKINGLOT_H