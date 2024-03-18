#include <iostream>

using namespace std;

extern int *readNumbers();
extern void printNumbers(int *numbers,int length);
extern int secondSmallestSum(int *numbers,int length);

int main(){
    int* array = new int[4];
    for (int i = 0; i < 4; i++){
        array[i] = i + 1;
    }
    secondSmallestSum(array, 4);
    
    delete[] array;
    return 0;
}