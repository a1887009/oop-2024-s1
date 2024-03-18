#include <iostream>

using namespace std;

int *readNumbers(){
    int* array = new int[10];
    for (int i = 0; i < 10; i++){
        cin >> array[i];
    }
    return array;
}

void printNumbers(int *numbers,int length){
    for (int i = 0; i < length; i++){
        cout << i << " " << numbers[i] << endl;
    }
}

int secondSmallestSum(int *numbers,int length){
    int sum = numbers[0];
    int smallest = numbers[0];
    int second = numbers[0];

    for (int i = 0; i < length; i++){
        for (int k = 1; k < i; k++){
            for (int j = 0; j < k; j++){
                sum += numbers[j];
                cout << numbers[j] << " ";
            }
            cout << "end loop " << endl;
        }
    }

    return 0;
}