#include <iostream>
#include <string>
#include "Orchestra.h"

Orchestra::Orchestra() : Orchestra(0) {};
Orchestra::Orchestra(int O_SIZE) {
    members = new Musician[O_SIZE];
    curr_size = 0;
};

bool Orchestra::has_instrument(std::string O_INSTRUMENT) {
    for (int i = 0; i < size; i ++){
        if (Musician::instrument == O_INSTRUMENT){
            return true;
        }
    }
    return false;
};

members[curr_size++] = musician;



