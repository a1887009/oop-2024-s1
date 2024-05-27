#ifndef GAME_H
#define GAME_H

#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include <vector>

class Game{
private:
    int numShips;
    int numMines;
    std::vector<GameEntity*> entities;

public:
    std::vector<GameEntity*>& get_entities() {return entities;};
    void set_entities(std::vector<GameEntity*>& entities) {this->entities = entities;};

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
        this->numShips = numShips;
        this->numMines = numMines;
        std::vector<GameEntity*> entities;
        for (int i = 0; i < numShips; i++){
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
        }
        for (int i = 0; i < numMines; i++){
            auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Mine(std::get<0>(pos), std::get<1>(pos)));
        }
        set_entities(entities);
        return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
    int iteration = 0;
    while (iteration < maxIterations) {
        // Move all Ship objects
        for (auto entity : entities) {
            if (entity->getType() == 'S') {
                dynamic_cast<Ship*>(entity)->move(1, 0);
            }
        }

        // Check for Ship-Mine proximity and explode Mines if needed
        for (auto ship : entities) {
            if (ship->getType() == 'S') {
                for (auto mine : entities) {
                    if (mine->getType() == 'M') {
                        double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());
                        if (distance <= mineDistanceThreshold) {
                            dynamic_cast<Mine*>(mine)->explode();
                        }
                    }
                }
            }
        }

        // Check if all Ship objects are destroyed
        bool allShipsDestroyed = true;
        for (auto entity : entities) {
            if (entity->getType() == 'S') {
                allShipsDestroyed = false;
                break;
            }
        }

        if (allShipsDestroyed) {
            std::cout << "All ships destroyed!" << std::endl;
            break;
        }

        ++iteration;
    }

    std::cout << "Game ended after " << iteration << " iterations." << std::endl;
}
};



#endif //GAME_H