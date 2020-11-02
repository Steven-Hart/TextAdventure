//
// Created by Mereslann on 21/10/2019.
//

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H


#include <iostream>
#include <string>
#include <map>
#include "Component.h"
#include "ComponentMessager.h"

using namespace std;

class GameObject{
public:
    GameObject();
    virtual ~GameObject();
    virtual void DisplayName() = 0;
    void DisplayDescription();
    bool checkComponent(string componentKey);
    Component* getComponent(string componentKey);


    int id;
    string name;
    string desc;

    map<string, Component*> Components;

};


#endif //GAMEOBJECT_H
