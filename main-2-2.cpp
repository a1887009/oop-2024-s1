#include <iostream>
#include "TV.h"

using namespace std;

int main(){

    TV TV(5, 100);

    cout << "TV initialised with power rating: " << TV.get_powerRating() << " and screen size: " << TV.getScreenSize() << endl;

    TV.setScreenSize(200);

    cout << "Screen size set to: " << TV.getScreenSize() << endl;

    cout << "Power consumption: " << TV.getPowerConsumption() << endl;

    return 0;
}