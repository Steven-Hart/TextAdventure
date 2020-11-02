//
// Created by Mereslann on 9/09/2019.
//

#ifndef PLAYER_H
#define PLAYER_H

#include "Inventory.h"
#include "Location.h"
#include "ComponentHealth.h"

class Player : public GameObject, public Inventory{
public:
    Player();
    virtual ~Player();

    Location * location;

    void Move(Location * newLocation);
    void DisplayName();

//    Inventory inventoryComponent;
    ComponentHealth Health;

};


#endif //PLAYER_H
