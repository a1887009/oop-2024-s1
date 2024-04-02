#include "warrior.h"
#include "player.h"
#include <iostream>
#include <string>

void Warrior::swingWeapon(Player* opponent){
    attack(opponent, getDamage());
}

Warrior::Warrior(std::string name, int health, int damage, std::string weapon) : Player(name, health, damage), weapon(weapon) {}