#include <iostream>

int count_evens(int number){

    if (number < 1) { // Result for when n < 1
        return 0;
    }

    int evens = 0;
    for (int i = 1; i < number + 1 ; i++){
        if (i % 2 == 0){
            evens++;
        }
    }

    return evens;
}