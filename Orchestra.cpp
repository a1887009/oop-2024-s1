#include <iostream>
#include <string>
#include "Orchestra.h"


Orchestra::Orchestra() {members = new Musician[0]; curr_size = 0;}; // When no number defined it sets up for zero members

Orchestra::Orchestra(int O_SIZE) { // when size defined it sets up for size
    size = O_SIZE;
    members = new Musician[O_SIZE];
    curr_size = 0;
};

int Orchestra::get_current_number_of_members() {return curr_size;}; // returns the current size of members

bool Orchestra::has_instrument(std::string O_INSTRUMENT) {
    for (int i = 0; i < size; i ++){
        if (members[i].get_instrument() == O_INSTRUMENT){
            return true;
        }
    }
    return false;
};

bool Orchestra::add_musician(Musician new_musician) {
    if (curr_size < size){
        members[curr_size] = new_musician;
        curr_size++;
        return true;
    }

    return false;
}

Musician *Orchestra::get_members() {return members;};

 Orchestra::~Orchestra() {delete[] members;};





