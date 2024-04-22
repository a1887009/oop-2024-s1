#ifndef HOUSE
#define HOUSE

#include <iostream>
#include "Appliance.h"

class House: public Appliance{

    private:

        int numAppliances;
        int currAppliances;
        Appliance** appliances;

    public:

        House();
        House(int numAppliances);

        bool addAppliance(Appliance* appliance);

        double getTotalPowerConsumption();

        ~House();

};



#endif //HOUSE 