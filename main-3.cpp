#include <iostream>
#include "Game.h"

int main() {
    // Create a Game object
    Game game;

    // Initialize the game with 2 ships, 3 mines, grid width 10, and grid height 10
    int numShips = 2;
    int numMines = 3;
    int gridWidth = 10;
    int gridHeight = 10;

    std::vector<GameEntity*> entities = game.initGame(numShips, numMines, gridWidth, gridHeight);

    // Print the initial positions of all entities
    std::cout << "Initial positions:" << std::endl;
    for (auto entity : entities) {
        std::cout << "Type: " << entity->getType() << ", Position: (" << std::get<0>(entity->getPos()) << ", " << std::get<1>(entity->getPos()) << ")" << std::endl;
    }

    // Run the game loop with a maximum of 10 iterations and a mine distance threshold of 5
    int maxIterations = 10;
    double mineDistanceThreshold = 5.0;

    game.gameLoop(maxIterations, mineDistanceThreshold);

    return 0;
}