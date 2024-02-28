#include <iostream>

int array_sum(int array[], int n) {

    int sum = 0; // Sets initial sum to zero

    for (int i = 0; i < n; i++) { // For each number in the array of length n

        sum += array[i]; // The value is added to sum

    }

    return sum; // Sum is returned
}