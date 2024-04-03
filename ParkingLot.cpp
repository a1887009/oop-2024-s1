#include <iostream>
#include <ctime>
#include "ParkingLot.h"
#include "Vehicle.h"

ParkingLot::ParkingLot(int capacity) : capacity(capacity), numParkedVehicles(0) {

    vehicles = new Vehicle*[capacity];

    for (int i = 0; i < capacity; ++i) {
      vehicles[i] = nullptr;
    }
}



bool ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (numParkedVehicles == capacity) {
      std::cout << "The lot is full\n";
      return false;
    }

    // Find the first available spot
    for (int i = 0; i < capacity; i++) {
      if (vehicles[i] == nullptr) {
        vehicles[i] = vehicle;
        numParkedVehicles++;
        return true;
      }
    }
    return false;
  }

bool ParkingLot::unparkVehicle(int ID) {
    for (int i = 0; i < capacity; i++) {
      if (vehicles[i] != nullptr && vehicles[i]->getID() == ID) {
        vehicles[i] = nullptr;
        numParkedVehicles--;
        return true;
      }
    }
    std::cout << "Vehicle not in the lot\n";
    return false;
}


int ParkingLot::getCapacity() {return capacity;}

int ParkingLot::getCount() {return numParkedVehicles;}
