#ifndef FLEET
#define FLEET

#include "Car.h"
#include <iostream>

class Fleet: public Car{
    private:
        Car** fleet;
    
    public:
        Fleet();
        Car** get_fleet();

};


#endif //FLEET