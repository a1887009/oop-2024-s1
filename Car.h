#ifndef CAR_H
#define CAR_H

#include <iostream>

class Car{
    private:
        int price;
        int emissions;
        int kms;

    public:

        // Basic functions
        Car();
        Car(int price);
        void drive(int kms);

        // Getters and setters
        int get_price();
        void set_price(int price);
        int get_emissions();
        void set_emissions(int emissions);
        int get_kms();
        void set_kms(int kms);



};


#endif // CAR_H