#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "GridUnit.h"
#include "Modifier.h"

class Obstacle: public GridUnit, public Modifier{
public:
    Obstacle(int x, int y) : GridUnit(x, y, 'O') {};
    bool isActive(){
        if (getEntity() == 'O'){return true;}
        return false;
    }
    void apply(GridUnit& unit) {unit.setEntity('X'); setEntity('X');}
};


#endif //OBSTACLE_H