#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern void print_pass_fail(char grade);

int main() {
    char grade = 'A';
    print_pass_fail(grade);
    return 0;
}