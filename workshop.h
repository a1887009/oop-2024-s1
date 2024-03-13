#include <iostream>

using namespace std;

void changeValue(double* value){

    *value = 42;

}

void printArray(double* array, int n){

    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }

    cout << endl;

}

double arrayMax(double* array, int n){
    double max = array[0];

    for (int i = 1; i < n; i++){

        if (max < array[i]){
            max = array[i];
        }

    }
    return max;

}

double* dynamicArray(int size, double M){

    double* array = new double[size];

    for (int i = 0; i < size; i++){
        array[i] = M;
    }

    return array;
}