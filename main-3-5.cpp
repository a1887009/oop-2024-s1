#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double sum_even(int array[], int n);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The sum of elements in even positions is: " << sum_even(array, 5) << std::endl;
    return 0;
}