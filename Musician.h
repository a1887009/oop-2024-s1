#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <iostream>
#include <string>

class Musician {
private:

    std::string instrument;
    int experience;

public:

    Musician();
    Musician(std::string M_INSTRUMENT, int M_EXPERIENCE);
    std::string get_instrument();
    int get_experience();

};


#endif //MUSICIAN_H