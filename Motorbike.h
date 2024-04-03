#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include <iostream>
#include <ctime>
#include "Vehicle.h"

class Motorbike : public Vehicle{
    public:
        Motorbike(int ID);
        Motorbike();
        int getParkingDuration();

};


#endif // MOTORBIKE_H