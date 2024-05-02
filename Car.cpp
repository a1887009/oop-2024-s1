#include "Car.h"
#include <iostream>

// Basic functions
Car::Car() {price = 0; emissions = 0; kms = 0;};
Car::Car(int price) {this->price = price; emissions = 0; kms = 0;};
void Car::drive(int kms) {this->kms += kms; emissions += 20 * kms;};

        // Getters and setters
int Car::get_price() {return price;};
void Car::set_price(int price) {this->price = price;};
int Car::get_emissions() {return emissions;};
void Car::set_emissions(int emissions) {this->emissions = emissions;};
int Car::get_kms() {return kms;};
void Car::set_kms(int kms) {this->kms = kms;};