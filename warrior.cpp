#include "warrior.h"
#include "player.h"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

void Warrior::swingWeapon(Player* opponent){
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << getName() << " swings their " << weapon << " at " << opponent->getName() << "!\n";
    attack(opponent, getDamage());
}

Warrior::Warrior(std::string name, int health, int damage, std::string weapon) : Player(name, health, damage), weapon(weapon) {}