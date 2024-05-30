#include "GridUnit.h"
#include "Modifier.h"
#include "Helper.h"


int main(){

    GridUnit GridUnit(1, 2, 'A'); 

    auto coords = Helper::generateRandomCoordinates(10, 10);

    std::cout << "Coords: " << std::get<0>(coords) << ", " << std::get<1>(coords) << std::endl;




    return 0;
}