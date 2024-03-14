#include <iostream>

extern double* duplicateArray(double* array, int size);

using namespace std;

int main(){

    double array[5] = {1, 2, 3, 4, 5};

    double* newArray = duplicateArray(array, 5);

    for (int i = 0; i < 5; i++){
        cout << newArray[i];
    }

    cout << endl;

    return 0;
}