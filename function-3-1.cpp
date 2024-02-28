#include <iostream>

bool is_fanarray(int array[], int n){

    if (n < 1){ // Result for when n < 1
        return false;
    }

    for (int i = 0; i < n / 2; i++){
        if (array[i] != array[n - i - 1] || array[i + 1] < array[i] || array[i + n + 1] > array[i + n]){
            return false;
        }

    }
    return true;
}