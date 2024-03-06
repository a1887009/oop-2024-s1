#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number){

    int number = stoi(decimal_number);

    if (number == 0){
        std::cout << 0 << std::endl;
        return;
    }

    std::string binary = "";

    while (number > 0){
        binary = std::to_string(number % 2) + binary;
        number /= 2;
    }

    std::cout << binary << std::endl;
}