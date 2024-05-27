#include <iostream>
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main() {
    // Create a Ship object
    Ship ship(3, 3);
    std::cout << "Ship position before moving: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")" << std::endl;
    
    // Move the ship
    ship.move(2, 1);
    std::cout << "Ship position after moving: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")" << std::endl;

    // Create a Mine object
    Mine mine(5, 5);
    std::cout << "Mine position: (" << std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << ")" << std::endl;

    // Explode the mine
    Explosion explosion = mine.explode();
    std::cout << "Mine exploded. Mine type: " << mine.getType() << std::endl;
    std::cout << "Explosion position: (" << std::get<0>(explosion.getPos()) << ", " << std::get<1>(explosion.getPos()) << ")" << std::endl;

    // Apply the explosion to the ship
    explosion.apply(ship);
    std::cout << "Ship type after explosion: " << ship.getType() << std::endl;

    return 0;
}