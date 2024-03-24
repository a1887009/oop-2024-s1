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

    if (length <= 1){
        return 0;
    }

    int sum = 0;
    int smallest = 0;
    int second = 0;

    for (int i = 0; i < length; i++){
<<<<<<< HEAD
        for (int k = 1; k < length; k++){
            for (int j = 0; j < k; j++){
                sum += numbers[j];
                cout << numbers[j] << " ";
            }
            cout << "end loop " << endl;
=======
        smallest += abs(numbers[i]);
        second += abs(numbers[i]);
    }

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
           
>>>>>>> 1721b52c58a86c78b69b41e04596f30ee7b307d8
        }
        //cout << "end loop " << endl;
    }

    return second;
}