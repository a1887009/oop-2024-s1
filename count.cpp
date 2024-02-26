#include <iostream>

int count(int array[], int n){
    int total = 0; // Sets total count to 0 before running code

    for (int i = 0; i < n; i++){ // For each value in the array of size n

        if (array[i] % 2 == 0){ // If the value is even

            total++; // Increment the number of evens
        }
    }

    return total; // Return the number of evens

}
