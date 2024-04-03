#include <iostream>
#include <ctime>
#include <string>
#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {

    ParkingLot parkingLot(10);

    std::string toPark;
    int i = 0;

    while (parkingLot.getCapacity() > parkingLot.getCount()){
        std::cout << "Enter the name of the vehicle to be parked: ";
        std::cin >> toPark;

        if (toPark == "Car"){
            Car* car = new Car(i + 1);
            parkingLot.parkVehicle(car);
            std::cout << "Car was parked with ID: " << i + 1 << std::endl;
            i++;
        }
        if (toPark == "Bus"){
            Bus* bus = new Bus(i + 1);
            parkingLot.parkVehicle(bus);
            std::cout << "Bus was parked with ID: " << i + 1 << std::endl;
            i++;
        }
        if (toPark == "Motorbike"){
            Motorbike* motorbike = new Motorbike(i + 1);
            parkingLot.parkVehicle(motorbike);
            std::cout << "Motorbike was parked with ID: "  << i + 1 << std::endl;
            i++;
        }
    }

    int unPark;

    std::cout << "Enter the ID of the vehicle to be unparked: ";
    std::cin >> unPark;

    parkingLot.unparkVehicle(unPark);

    
    return 0;
}