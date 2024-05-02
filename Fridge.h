#ifndef FRIDGE
#define FRIDGE

#include <iostream>
#include "Appliance.h"

class Fridge: public Appliance{
    
    private:

        double volume;

    public:

        Fridge();
        Fridge(int powerRating, double volume);

        void setVolume(double volume);
        double getVolume();

        double getPowerConsumption();

};


#endif // FRIDGE