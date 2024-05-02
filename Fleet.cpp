#include "Fleet.h"
#include "Car.h"
#include "Tesla.h"
#include "Ford.h"
#include <iostream>

Fleet::Fleet(){

    fleet = new Car*[5];

    Tesla v1('S', 10000);
    Ford v2(1, 20000);
    Car v3(30000);
    Ford v4(2, 40000); 
    Tesla v5('T', 50000);

    fleet[0] = &v1;
    fleet[1] = &v2;
    fleet[2] = &v3;
    fleet[3] = &v4; 
    fleet[4] = &v5;
}

Car** Fleet::get_fleet() {return fleet;};