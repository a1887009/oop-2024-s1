#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"


int main() {
  int numCars, numBuses, numMotorbikes;

  std::cout << "Enter the number of cars: ";
  std::cin >> numCars;

  std::cout << "Enter the number of buses: ";
  std::cin >> numBuses;

  std::cout << "Enter the number of motorbikes: ";
  std::cin >> numMotorbikes;

  // Create an array of pointers to Vehicle objects
  Vehicle* vehicles[numCars + numBuses + numMotorbikes];

  // Create Car objects
  for (int i = 0; i < numCars; ++i) {
    vehicles[i] = new Car(i + 1);
  }

  // Create Bus objects
  for (int i = numCars; i < numCars + numBuses; ++i) {
    vehicles[i] = new Bus(i + 1 - numCars);
  }

  // Create Motorbike objects
  for (int i = numCars + numBuses; i < numCars + numBuses + numMotorbikes; ++i) {
    vehicles[i] = new Motorbike(i + 1 - numCars - numBuses);
  }

  // Iterate over the array and call the getParkingDuration() function
  for (int i = 0; i < numCars + numBuses + numMotorbikes; ++i) {
    std::cout << "Vehicle " << vehicles[i]->getID() << " parking duration: "
              << vehicles[i]->getParkingDuration() << " seconds\n";
  }

  // Deallocate memory
  for (int i = 0; i < numCars + numBuses + numMotorbikes; ++i) {
    delete vehicles[i];
  }

  return 0;
}