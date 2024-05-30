#ifndef HELPER_H
#define HELPER_H

#include "GridUnit.h"
//#include <rand>
#include <cmath>

class Helper{
public:
    static std::tuple<int, int> generateRandomCoordinates(int gridWidth, int gridHeight){
        std::tuple<int, int> RandCoordinates;
        std::get<0>(RandCoordinates) = rand() % gridWidth;
        std::get<1>(RandCoordinates) = rand() % gridHeight;
        return RandCoordinates;
    }
    static double calculateDistance(std::tuple<int, int> coords1, std::tuple<int, int> coords2){
        double distance;
        distance = pow((pow(std::get<0>(coords1) - std::get<0>(coords2), 2) + pow(std::get<1>(coords1) - std::get<1>(coords2), 2)), 0.5);
        return distance;
    }
};


#endif //HELPER_H