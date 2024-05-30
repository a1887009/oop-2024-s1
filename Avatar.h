#ifndef AVATAR_H
#define AVATAR_H

#include "GridUnit.h"
#include "Modifier.h"

class Avatar: public GridUnit{
public:
    Avatar(int x, int y) : GridUnit(x, y, 'A') {};
    void shift(int dx, int dy) {
        auto initial = getCoordinates();
        setCoordinates(std::get<0>(initial) + dx, std::get<1>(initial) + dy);
    }
};


#endif //AVATAR_H