#include <iostream>

using namespace std;

extern int *readNumbers();
extern void printNumbers(int *numbers,int length);

int main(){
    int* nums = readNumbers();
    printNumbers(nums, 10);
    delete[] nums;
    return 0;
}