#include <iostream>
#include "player.h"
#include "wizard.h"
#include "warrior.h"

using namespace std;

int main() {
    //Wizard(name, health, damage, mana)
    Wizard wizard("Gandalf", 100, 20, 50);
    //Warrior(name, health, damage, weapon)
    Warrior warrior("Aragorn", 120, 25, "Sword");
    cout << "Let the battle begin!" << endl;
    cout << endl;

    cout << "Warrior Health: " << warrior.getHealth() << endl;

    while (wizard.getHealth() > 0 && warrior.getHealth() > 0) {
        cout << "Wizard Health: " << wizard.getHealth() << endl;
        cout << endl;
        cout << "Wizard Attacks!" << endl;
        cout << endl;
        wizard.castSpell(&warrior);
        cout << "Warrior Health: " << warrior.getHealth() << endl;
        cout << endl;

        if (warrior.getHealth() > 0) {
            cout << "Warrior Attacks!" << endl;
            cout << endl;
            warrior.swingWeapon(&wizard);
        }
    }

    cout << endl;
    cout << endl;
    cout << "Wizard Health: " << wizard.getHealth() << endl;
    cout << "Warrior Health: " << warrior.getHealth() << endl;
    cout << endl;
    cout << endl;

    if (wizard.getHealth() > 0) {
        cout << wizard.getName() << " wins!" << endl;
    } else {
        cout << warrior.getName() << " wins!" << endl;
    }

    return 0;
}