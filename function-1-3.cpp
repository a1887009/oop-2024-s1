#include <iostream>


int num_count(int array[], int n, int number){

    if (n < 1) { // Result for when n < 1
        return 0;
    }

    int count = 0; // Intialising count
    for (int i = 0; i < n; i++){
        if (array[i] == number){
            count++; // When number matches count is incremented
        }
    }

    return count;

}