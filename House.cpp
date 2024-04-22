#include <iostream>
#include "House.h"

House::House() {appliances = new Appliance*[0]; numAppliances = 0; currAppliances = 0;};
House::House(int numAppliances) {
    appliances = new Appliance*[numAppliances]; 
    this->numAppliances = numAppliances; ;
    currAppliances = 0;
};

bool House::addAppliance(Appliance* appliance) {
    
    if (currAppliances < numAppliances){
        appliances[currAppliances] = appliance;
        currAppliances++;
        return true;   
    }
    return false;
};

double House::getTotalPowerConsumption() {

    int totalPowerConsumption = 0;

    for (int i = 0; i < currAppliances; i++){
        totalPowerConsumption += appliances[i]->getPowerConsumption();
    }

    return totalPowerConsumption;
};

House::~House() {delete[] appliances;};