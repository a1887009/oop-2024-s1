#include <iostream>

using namespace std;

void print_summed(int array1[3][3], int array2[3][3]){

    for (int i = 0; i < 3; i++){

        for (int k = 0; k < 3; k++){

            cout << array1[i][k] + array2[i][k] << " ";

        }

        cout << endl;
    }
}