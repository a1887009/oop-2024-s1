#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int max_element(int array[], int n);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The maximum element in the array is: " << max_element(array, 5) << std::endl;
    return 0;
}