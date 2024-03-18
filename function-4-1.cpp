#include <iostream>
#include <climits>

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
    int sum = 0;
    int smallest = INT_MAX;
    int second = INT_MAX;

    for (int i = 0; i < length; i++){

        sum = 0;

        for (int j = i; j < length; j++){

            sum += numbers[j];

            if (sum < smallest){

                second = smallest;
                smallest = sum;

            }else if (sum < second && sum != smallest){

                second = sum;
            } 
            
            //cout << numbers[j] << " ";
           
        }
        //cout << "end loop " << endl;
    }

    return second;
}