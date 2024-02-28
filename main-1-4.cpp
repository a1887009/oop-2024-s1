#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array[5] = {2,5,2,7,9};
    int secondarray[5] = {4,3,2,5,9};
    std::cout << "The sum of the two arrays is: " << sum_two_arrays(array, secondarray, 5) << std::endl;
    return 0;
}