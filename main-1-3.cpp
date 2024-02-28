#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int num_count(int array[], int n, int number);

int main() {
    int array[5] = {2,5,2,7,9};
    std::cout << "There are " << num_count(array, 5, 2) << " of number x in the array.\n" << std::endl;
    return 0;
}