#include <iostream>
#include <cmath>


int transform(int n){
    int binary = 0;
    int count = 0;

    while (n != 0){
        binary = binary + ((n % 2) * pow(10, count)) ;
        // std::cout << "Binary: " << binary << std::endl;

        n = n / 2;
        // std::cout << "n: "<<  n << std::endl;
        count++;
    }

    return binary;
}

int main(){

    std::cout << "Binary number is: " << transform(75) << std::endl;
    return 0;
}