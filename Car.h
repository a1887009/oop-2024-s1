#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <ctime>
#include "Vehicle.h"

class Car : public Vehicle{
    public:
        Car(int ID);
        Car();
        int getParkingDuration();

};


#endif // CAR_H