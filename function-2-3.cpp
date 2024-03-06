#include <iostream>

bool is_palindrome(int integers[], int length){

    for (int i = 0; i < length / 2; i++){

        if (length == 0 || length < 0) {
            return false;
        }

        if (integers[i] != integers[length - i - 1]){
            return false;
        }
    }

    return true;

}

int sum_array_elements(int integers[], int length){

    if (length == 0 || length < 0) {
        return -1;
    }

    int sum = 0;

    for (int i = 0; i < length; i++){
        sum += integers[i];
    }

    return sum;
}

int sum_if_palindrome(int integers[], int length){

    if (is_palindrome(integers, length) == false){
        return -2;
    }

    return sum_array_elements(integers, length);
}
