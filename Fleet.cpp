#include "Fleet.h"
#include "Car.h"
#include "Tesla.h"
#include "Ford.h"
#include <iostream>

Fleet::Fleet(){

    fleet = new *Car[5];

    fleet[0] = Tesla Tesla1('S', 10000);
    fleet[1] = Ford Ford2(1, 20000);
    fleet[2] = Car Car3(30000);
    fleet[3] = Ford Ford4(2, 40000); 
    fleet[4] = Tesla Tesla5('T', 50000);
}

Fleet::get_fleet() {return &fleet;};