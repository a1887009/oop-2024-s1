#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <ctime>

class Vehicle{
    protected:
        std::time_t timeOfEntry;
        int ID;

    public:
        Vehicle(int ID);
        Vehicle();
        int getID();
        virtual int getParkingDuration();



};


#endif // VEHICLE_H