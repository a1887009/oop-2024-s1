#include "Car.h"
#include <iostream>

using namespace std;

int main(){

    Car Car(10000);

    Car.drive(100);

    cout << "The car has driven " << Car.get_kms() << "kms and has emissions " << Car.get_emissions() << "L and cost $" << Car.get_price() << endl;

    return 0;
}