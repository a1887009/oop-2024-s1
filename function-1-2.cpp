#include <iostream>

int is_identity(int array[10][10]){

    for (int i = 0; i < 10; i++){

        for (int k = 0; k < 10; k++){

            if ((i == k && array[i][k] != 1) || (i != k && array[i][k] != 0)){

                return 0;
            }
        }
    }

    return 1;
}