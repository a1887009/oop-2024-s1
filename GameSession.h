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
            grid.push_back(new Avatar(std::get<0>(position), std::get<1>(position)));
        }
        for (int i = 0; i < numObstacles; i++){
            auto position = Helper::generateRandomCoordinates(gridWidth, gridHeight);
            grid.push_back(new Obstacle(std::get<0>(position), std::get<1>(position)));
        }
        width = gridWidth;
        height = gridHeight;

    }
    void gameCycle(int maxCycles, double obstacleActivationDistance){
        for (int i = 0; i < maxCycles; i++){
            for (auto avatar : grid){
                if (avatar->getEntity() == 'A'){
                                                //std::cout << "check1" << std::endl;
                    avatar->shift(1, 0);
                                                //std::cout << "check2" << std::endl;
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