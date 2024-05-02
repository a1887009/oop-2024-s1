#include "Tesla.h"
#include <iostream>

Tesla::Tesla() {
    model = 'T';
    set_price(0);
    set_kms(0);
};
Tesla::Tesla(char model, int price) {
    this->model = model;
    set_price(price);
    set_kms(0);    
};

void Tesla::chargeBattery(int mins) {
    batteryPercentage += mins * 0.5;
    if (batteryPercentage > 100){
        batteryPercentage = 100;
    }
};            
void Tesla::drive(int kms) {
    if (batteryPercentage * 5 >= kms){
        set_kms(get_kms() + kms);
        set_emissions(get_emissions() + (74 * kms));
        batteryPercentage -= kms * 0.2;
    } else{
        set_kms(get_kms() + batteryPercentage * 5);
        set_emissions(get_emissions() + (74 * batteryPercentage * 5));
        batteryPercentage = 0;
    }
};

// Getters and setters
char Tesla::get_model() {return model;};
void Tesla::set_model(char model) {this->model = model;};
float Tesla::get_batteryPercentage() {return batteryPercentage;};
void Tesla::set_batteryPercentage(int batteryPercentage) {this->batteryPercentage = batteryPercentage;};
