#include <iostream>

double array_mean(int array[], int n) {

    int sum = 0.0; // Sets initial sum to zero

    double mean; // Sets a varaible for mean

    if (n < 1) { // Result for when n < 1
        return 0;
    }


    for (int i = 0; i < n; i++) { // For each number in the array of length n

        sum += array[i]; // The value is added to sum

    }

    mean = sum / n; // Calculates mean

    return mean; // Mean is returned
}