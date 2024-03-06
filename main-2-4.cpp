#include <iostream>

using namespace std;

extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);

int main(){

    int integers[4] = {1, 2, 3, 4};
    int length = 4;

    // cout << "Min: " << array_min(integers, length) << endl;
    // cout << "Max: " << array_max(integers, length) << endl;
    cout << "Sum min max: " << sum_min_max(integers, length) << endl;

    return 0;
}