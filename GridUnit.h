#ifndef GRIDUNIT_H
#define GRIDUNIT_H

#include <iostream>
#include <tuple>


class GridUnit{
private:
    std::tuple<int, int> coordinates;
    char entity;

public:
    GridUnit(int x, int y, char entity) : entity(entity) {coordinates = std::make_tuple(x, y);}
    std::tuple<int, int> getCoordinates() {return coordinates;}
    char getEntity() {return entity;}
    void setCoordinates(int x, int y) {
        std::get<0>(coordinates) = x;
        std::get<1>(coordinates) = y;
    }
    void setEntity(char entity) {this->entity = entity;}
};





#endif //GRIDUNIT_H