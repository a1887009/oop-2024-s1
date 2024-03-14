#include <iostream>

extern double arrayMin(double* array, int size);

using namespace std;

int main(){

    double array[5] = {1, 2, 3, 4, 0.2};

    cout << "Array min: " << arrayMin(array, 5) << endl;

    return 0;
}