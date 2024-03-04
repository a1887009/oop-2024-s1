#include <iostream>
#include <cmath>

using namespace std;

void shift_right(int number[], int len){
    int new_number[len] = {0};

    for (int i = 0; i < (len - 1); i++){
        new_number[i + 1] = number[i];
    }

    cout << "Shift right: ";

    for (int i = 0; i < len; i++){
        cout << new_number[i];

    }

    cout << endl;

}

void shift_left(int number[], int len){
    int new_number[len] = {0};

    for (int i = 0; i < len - 1; i++){
        new_number[i] = number[i + 1];
    }

    cout << "Shift left: ";

    for (int i = 0; i < len; i++){
        cout << new_number[i];

    }

    cout << endl;
}

void addition(int number1[], int len1, int number2[], int len2){

    int num1 = 0;
    int num2 = 0;
    int sum;

    // Convert num1 to decimal
    for (int i = 0; i < len1; i++){
        num1 += number1[i] * pow(2, len1 - i - 1);
    }

    // Convert num2 to decimal
    for (int i = 0; i < len2; i++){
        num2 += number2[i] * pow(2, len2 - i - 1);
    }

    // Sum
    sum = num1 + num2;

    int binary = 0;
    int count = 0;

    // Convert to binary
    while (sum != 0){
        binary = binary + ((sum % 2) * pow(10, count)) ;
        sum = sum / 2;
        count++;
    }

    cout << "Sum: " << binary << endl;

}

void subtraction(int number1[], int len1, int number2[], int len2){

    int num1 = 0;
    int num2 = 0;
    int sub;

    // Convert num1 to decimal
    for (int i = 0; i < len1; i++){
        num1 += number1[i] * pow(2, len1 - i - 1);
    }

    // Convert num2 to decimal
    for (int i = 0; i < len2; i++){
        num2 += number2[i] * pow(2, len2 - i - 1);
    }

    // Subtraction
    sub = num1 - num2;

    int binary = 0;
    int count = 0;

    // Convert to binary
    while (sub != 0){
        binary = binary + ((sub % 2) * pow(10, count)) ;
        sub = sub / 2;
        count++;
    }

    cout << "Subtraction: " << binary << endl;

}

int main(){

    int number1[4] = {1,0,1,1};
    int number2[6] = {1,1,0,0,1,0};

    shift_right(number1, 4);
    shift_left(number1, 4);
    addition(number1, 4, number2, 6);
    subtraction(number2, 6, number1, 4);

    return 0;
}