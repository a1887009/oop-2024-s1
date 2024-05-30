#include "GameSession.h"

int main(){
    GameSession session;

    session.initGameSession(5, 1, 10, 10);

    session.gameCycle(10, 1.5);


    return 0;
}