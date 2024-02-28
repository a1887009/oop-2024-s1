#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count_evens(int number);

int main() {
    std::cout << "There number of evens is: " << count_evens(99) << std::endl;
    return 0;
}