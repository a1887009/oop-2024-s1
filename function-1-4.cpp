#include <iostream>

using namespace std;

void print_scaled(int array[3][3], int scale){

    for (int i = 0; i < 3; i++){

        for (int k = 0; k < 3; k++){

            cout << array[i][k] * scale << " ";
        }

        cout << endl;
    }
}