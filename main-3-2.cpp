#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int median_array(int array[], int n);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The median of the array is: " << median_array(array, 5) << std::endl;
    return 0;
}