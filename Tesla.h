#ifndef TESLA_H
#define TESLA_H

#include "Car.h"
#include <iostream>

class Tesla: public Car{

    private:
        char model;
        float batteryPercentage;

    public:

        // General functions
        Tesla();            
        Tesla(char model, int price);
        void chargeBattery(int mins);            
        void drive(int kms);

        // Getters and setters
        char get_model();
        void set_model(char model);
        float get_batteryPercentage();
        void set_batteryPercentage(int batteryPercentage);

};

#endif // TESLA_H