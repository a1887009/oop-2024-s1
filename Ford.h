#ifndef FORD_H
#define FORD_H

#include "Car.h"
#include <iostream>

class Ford: public Car{
    private:
        int badgeNumber;
        float litresOfFuel;

    public:
        Ford();            
        Ford(int badgeNumber, int price);
        void refuel(int litres);
        void drive(int kms); 

        int get_badgeNumber();
        void set_badgeNumber(int badgeNumber);
        float get_litresOfFuel();
        void set_litresOfFuel(float litresOfFuel);


};


#endif //FORD_H