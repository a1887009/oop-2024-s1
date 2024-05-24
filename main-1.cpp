#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include <iostream>


int main() {
    // Define grid dimensions
    int gridWidth = 10;
    int gridHeight = 10;

    // Create Utils object
    Utils utils;

    // Generate random positions
    std::tuple<int, int> pos1 = utils.generateRandomPos(gridWidth, gridHeight);
    std::tuple<int, int> pos2 = utils.generateRandomPos(gridWidth, gridHeight);

    // Create GameEntities with random positions
    GameEntity entity1(std::get<0>(pos1), std::get<1>(pos1), 'A');
    GameEntity entity2(std::get<0>(pos2), std::get<1>(pos2), 'B');

    // Calculate distance between entities
    double distance = utils.calculateDistance(pos1, pos2);

    // Display information
    std::cout << "Entity 1: Type " << entity1.getType() << ", Position: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n";
    std::cout << "Entity 2: Type " << entity2.getType() << ", Position: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n";
    std::cout << "Distance between Entity 1 and Entity 2: " << distance << std::endl;

    return 0;
}
