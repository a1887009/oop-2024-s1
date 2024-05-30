#include "GridUnit.h"
#include "Modifier.h"
#include "Helper.h"
#include "Obstacle.h"
#include "Avatar.h"

int main(){
    Obstacle obstacle(5, 0);

    Avatar avatar (1, 0);

    obstacle.apply(avatar);


    return 0;
}