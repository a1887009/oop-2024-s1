#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <tuple>
#include "Explosion.h"


class GameEntity{
private:
    std::tuple<int, int> position;
    char type;

public:
    GameEntity(int x, int y, char type) : type(type) {position = std::make_tuple(x, y);};

    std::tuple<int, int> getPos() {return position;};
    char getType() {return type;};
    void setPos(int x, int y) {position = std::make_tuple(x, y);};
    void setType(char type){this->type = type;};
    virtual ~GameEntity() {}
};



#endif //GAMEENTITY_H