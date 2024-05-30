#ifndef GAMESESSION_H
#define GAMESESSION_H
#include "GridUnit.h"
#include "Helper.h"
#include "Obstacle.h"
#include "Avatar.h"
#include <vector>

class GameSession{
private:
    std::vector<GridUnit*> grid;
    int width;
    int height;

public:
    std::vector<GridUnit*>& getGrid() {return grid;}
    void initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight){
        for (int i = 0; i < numAvatars; i++){
            auto position = Helper::generateRandomCoordinates(gridWidth, gridHeight);
            Avatar avatar(std::get<0>(position), std::get<1>(position));
            grid.push_back(&avatar);
        }
        for (int i = 0; i < numObstacles; i++){
            auto position = Helper::generateRandomCoordinates(gridWidth, gridHeight);
            Obstacle obstacle(std::get<0>(position), std::get<1>(position));
            grid.push_back(&obstacle);
        }
        width = gridWidth;
        height = gridHeight;
    }
    void gameCycle(int maxCycles, double obstacleActivationDistance){
        for (int i = 0; i < maxCycles; i++){
            for (auto avatar : grid){
                if (avatar->getEntity() == 'A'){
                    avatar->shift(1, 0);
                }
                for (auto obstacle : grid){
                    if (obstacle->getEntity() == 'O' && obstacle->IsActive() == true){
                        if (Helper::calculateDistance(avatar->getCoordinates(), obstacle->getCoordinates()) <= obstacleActivationDistance){
                            obstacle->apply(*avatar);
                        }
                    }
                }
                if (std::get<0>(avatar->getCoordinates()) > width){
                    std::cout << "Avatar has won the game!" << std::endl;
                    i = maxCycles;
                }
            }
        }
        std::cout << "Maximum number of cycles reached. Game over." << std::endl;
    }
};

#endif //GAMESESSION_H