#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <tuple>

class Utils{
public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
        std::tuple<int, int> position;
        std::get<0>(position) = rand() % (gridWidth + 1);
        std::get<1>(position) = rand() % (gridHeight + 1);
        return position;
    };

    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
        double distance;
        distance = pow(pow(std::get<0>(pos1) - std::get<0>(pos2), 2) + pow(std::get<1>(pos1) - std::get<1>(pos2), 2), 0.5);
        return distance;
    };
};

#endif //UTILS_H