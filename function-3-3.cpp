#include <iostream>

double weighted_average(int array[], int n){

    if (n < 1){
        return 0;
    }

    double average = 0;
    for (int i = 0; i < n; i++){
        average += array[i] * (1 / n);
    }

    return average;
}