#include <iostream>

int median_array(int array[], int n){

    if (n % 2 == 0 || n < 1){
        return 0;
    }

    return array[n / 2];
}