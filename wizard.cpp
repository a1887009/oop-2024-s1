#include "wizard.h"
#include "player.h"
#include <iostream>
#include <chrono>
#include <thread>

void Wizard::castSpell(Player* opponent){
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << getName() << " casts a spell on " << opponent->getName() << " for " << mana << " damage.\n";
    attack(opponent, mana);
}

Wizard::Wizard(std::string name, int health, int damage, int mana) : Player(name, health, damage), mana(mana) {}

