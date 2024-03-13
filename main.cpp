#include <iostream>
#include "workshop.h"

using namespace std;

int main(){

    double origionalValue = 10;
    changeValue(&origionalValue);
    cout << "Changed Value: " << origionalValue << endl;

    double array[] = {1,2,3,4,5};
    int arraySize = 5;
    printArray(array, arraySize);

    cout << "Max value: " << arrayMax(array, arraySize) << endl;

    int array2Size = 10;
    double arrayValue = 5;
    double* array2 = dynamicArray(array2Size, arrayValue);
    for (int i = 0; i < array2Size; i++){
        cout << array2[i] << " ";
    }
    cout << endl;
    delete array2;

    return 0;
}