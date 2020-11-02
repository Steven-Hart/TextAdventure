//
// Created by Mereslann on 1/10/2019.
//

#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

#include "GameObject.h"
#include "Inventory.h"

using namespace std;

class Item : public GameObject, public Inventory{
public:
    Item();
    virtual ~Item();
    void DisplayName();
//    void Display();
    Item* Copy();

//    Inventory inventoryComponent;
private:
};


#endif //ITEM_H
