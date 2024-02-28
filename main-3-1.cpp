#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern bool is_fanarray(int array[], int n);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << std::boolalpha;
    std::cout << "The array is a fan array: " << is_fanarray(array, 5) << std::endl;
    return 0;
}