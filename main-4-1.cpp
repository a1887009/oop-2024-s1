#include <iostream>

using namespace std;

extern int *readNumbers();
extern void printNumbers(int *numbers,int length);
extern int secondSmallestSum(int *numbers,int length);

int main(){
    int array[4] = {-1, -2, -3, -4};
    cout << "Second smallest sum: " << secondSmallestSum(array, 4) << endl;
    return 0;
}