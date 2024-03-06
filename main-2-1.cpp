#include <iostream>
#include <string>

using namespace std;

extern void print_binary_str(std::string decimal_number);


int main(){
    string number  = "75";

    print_binary_str(number);

    return 0;
}