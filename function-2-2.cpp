#include <iostream>
#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits){

    int number = 0;

    for (int i = 0; i < number_of_digits; i++){
        number += binary_digits[number_of_digits - i - 1] * pow(2, i);
    }

    return number;
}