#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship: public GameEntity{

public:
    Ship(int x, int y) : GameEntity(x, y, 'S') {};

    void move(int dx, int dy) {
        auto initialPos = getPos();
        setPos(std::get<0>(initialPos) + dx, std::get<1>(initialPos) + dy);
    }

};



#endif //SHIP_H