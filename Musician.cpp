#include <iostream>
#include <string>
#include "Musician.h"


Musician::Musician() : Musician("null", 0) {};
Musician::Musician(std::string M_INSTRUMENT, int M_EXPERIENCE) {
    instrument = M_INSTRUMENT;
    experience = M_EXPERIENCE;
};

std::string Musician::get_instrument() {return instrument;};
int Musician::get_experience() {return experience;};
