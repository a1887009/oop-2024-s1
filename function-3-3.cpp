#include <iostream>

double weighted_average(int array[], int n){

    if (n < 1){
        return 0;
    }

    double sum = 0;
    for (int i = 0; i < n; i++){
        int count = 0;

        for (int k = 0; k < n; k++){
            if (array[k] == array[i]){
                count++;
             }
        }

        sum += array[i] * static_cast<double>(count) / n;
    }

    return sum;
}