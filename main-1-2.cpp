#include <iostream>

extern void modifyArray(double* array, int size, double value);

using namespace std;

int main(){

    double array[5] = {1, 2, 3, 4, 5};

    modifyArray(array, 5, 1);

    for (int i = 0; i < 5; i++){
        cout << array[i];
    }

    cout << endl;

    return 0;
}