#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double array_mean(int array[], int n);

int main() {
    int array[5] = {4,5,6,7,9};
    std::cout << "The mean of the array is: " << array_mean(array, 5) << std::endl;
    return 0;
}