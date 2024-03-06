#include <iostream>

using namespace std;

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

int main(){

    int integers[5] = {1, 2, 1, 2, 1};
    int length = 5;

    // cout << "Is palindrome: " << is_palindrome(integers, length) << endl;
    cout << "Sum if plaindrome: " << sum_if_palindrome(integers, length) << endl;
    // cout << "Sum array elements: " << sum_array_elements(integers, length) << endl;

    return 0;
}