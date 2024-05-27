#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine: public GameEntity{

public:
    Mine(int x, int y) : GameEntity(x, y, 'M') {};
    Explosion explode() {
        setType('X');

        auto Pos = getPos();
        return Explosion(std::get<0>(Pos), std::get<1>(Pos));
    }

};



#endif //MINE_H