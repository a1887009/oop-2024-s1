#ifndef APPLIANCE
#define APPLIANCE

#include <iostream>

class Appliance{

    protected:

        int powerRating;
        bool isOn;

    public:

        Appliance();
        Appliance(int powerRating);

        int get_powerRating();
        void set_powerRating(int powerRating);
        bool get_isOn();

        void turnOn();
        void turnOff();
        virtual double getPowerConsumption();


};




#endif // APPLIANCE