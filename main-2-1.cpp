#include <iostream>
#include "Fridge.h"


using namespace std;

int main(){

    Fridge Fridge(5, 100);

    cout << "Fridge initialised with power rating: " << Fridge.get_powerRating() << " and volume: " << Fridge.getVolume() << endl;

    Fridge.setVolume(200);

    cout << "Volume set to " << Fridge.getVolume() << endl;

    cout << "Frige Power Consumption: " << Fridge.getPowerConsumption() << endl;


    return 0;
}