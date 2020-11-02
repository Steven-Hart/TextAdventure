#include <iostream>


#include "Zorkish.h"


using namespace std;



int main() {
    auto * game = new Zorkish();
    while(!game->GetGameOver()){
        game->Render();
        game->Update();
    }
    return 0;
}