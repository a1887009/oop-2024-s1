#include "Ford.h"
#include <iostream>

Ford::Ford() {
    badgeNumber = 0;
    litresOfFuel = 0;
    set_kms(0);
    set_emissions(0);
    set_price(0);
};            
Ford::Ford(int badgeNumber, int price) {
    this->badgeNumber = badgeNumber;
    litresOfFuel = 60;
    set_kms(0);
    set_emissions(0);
    set_price(price);
};
void Ford::refuel(int litres) {
    litresOfFuel += litres;
    if (litresOfFuel > 60) {litresOfFuel = 60;};
};
void Ford::drive(int kms) {
    if (litresOfFuel * 5 >= kms){
        set_kms(get_kms() + kms);
        set_emissions(get_emissions() + (234 * kms));
        litresOfFuel -= kms * 0.2;
    } else{
        set_kms(get_kms() + (litresOfFuel * 5));
        set_emissions(get_emissions() + 234 * litresOfFuel * 5);
        litresOfFuel = 0;
    }
}; 



int Ford::get_badgeNumber() {return badgeNumber;};
void Ford::set_badgeNumber(int badgeNumber) {this->badgeNumber = badgeNumber;};
float Ford::get_litresOfFuel() {return litresOfFuel;};
void Ford::set_litresOfFuel(float litresOfFuel) {this->litresOfFuel = litresOfFuel;};