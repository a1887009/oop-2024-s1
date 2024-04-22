#include <iostream>
#include "House.h"
#include "Fridge.h"
#include "TV.h"

using namespace std;

int main(){

    Fridge Fridge1(5, 100);
    Fridge Fridge2(4, 100);
    TV TV1(3, 200);
    TV TV2(1, 200);

    House House(3);

    cout << "Adding Fridge1: " << House.addAppliance(&Fridge1) << endl;
    cout << "Adding Fridge2: " << House.addAppliance(&Fridge2) << endl;
    cout << "Adding TV1: " << House.addAppliance(&TV1) << endl;
    cout << "Adding TV2: " << House.addAppliance(&TV2) << endl;

    cout << "Total Power Consumption: " << House.getTotalPowerConsumption() << endl;

    return 0;
}