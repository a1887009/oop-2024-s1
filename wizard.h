#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"
#include <iostream>

class Wizard: public Player{
    private:
        int mana;

    public:
        void castSpell(Player* opponent);
        Wizard(std::string name, int health, int damage, int mana);

};


#endif // WIZARD_H