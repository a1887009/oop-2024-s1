#include "wizard.h"
#include "player.h"
#include <iostream>

void Wizard::castSpell(Player* opponent){
    attack(opponent, mana);
}

Wizard::Wizard(std::string name, int health, int damage, int mana) : Player(name, health, damage), mana(mana) {}

