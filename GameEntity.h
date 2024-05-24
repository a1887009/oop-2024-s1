#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <tuple>


class GameEntity{
private:
    std::tuple<int, int> position;
    char type;

public:
    GameEntity(int x, int y, char type) : type(type) {std::get<0>(position) = x; std::get<1>(position) = y;};

    std::tuple<int, int> std::getPos() {return position;};
    char std::getType() {return type;};

};



#endif //GAMEENTITY_H