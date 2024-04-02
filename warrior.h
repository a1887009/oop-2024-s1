#ifndef WARRIOR_H
#define WARRIOR_H

#include "player.h"
#include <iostream>
#include <string>

class Warrior: public Player{
    private:
        std::string weapon;
    
    public:
        void swingWeapon(Player* opponent);
        Warrior(std::string name, int health, int damage, std::string weapon);
        
};


#endif // WARRIOR_H