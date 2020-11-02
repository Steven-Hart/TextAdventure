//
// Created by Mereslann on 1/10/2019.
//

#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>
#include <vector>
#include "Inventory.h"

using namespace std;

class Location : public Inventory{
public:
    int id;
    Location(int id, string name, string desc);
    Location();
    virtual ~Location();

    string name;
    string desc;
    vector<string> command;
//    Inventory inventoryComponent;
};


#endif //LOCATION_H
