#include <iostream>
#include "Fridge.h"

Fridge::Fridge() {powerRating = 0, volume = 0;};
Fridge::Fridge(int powerRating, double volume) {this->powerRating = powerRating, this->volume = volume;};

void Fridge::setVolume(double volume) {this->volume = volume;};
double Fridge::getVolume() {return volume;};

double Fridge::getPowerConsumption() {return powerRating * 24 * (volume / 100)};