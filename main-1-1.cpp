#include <iostream>
#include "Appliance.h"

using namespace std;

int main(){

    Appliance Appliance(5);

    cout << "Appliance initialises with isOn = " << Appliance.get_isOn() << " and powerRating = " << Appliance.get_powerRating() << endl;

    Appliance.turnOn();

    cout << "Appliance turned on? " << Appliance.get_isOn() << endl;

    Appliance.turnOff();

    cout << "Appliance turned off? " << !Appliance.get_isOn() << endl;

    Appliance.set_powerRating(2);

    cout << "Appliance power rating set to " << Appliance.get_powerRating() << endl;

    return 0;
}