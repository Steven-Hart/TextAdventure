//
// Created by Mereslann on 28/10/2019.
//

#ifndef COMPONENTMESSAGER_H
#define COMPONENTMESSAGER_H

#include "string"
#include "vector"
#include "Component.h"

using namespace std;

class GameObject;

class ComponentMessager : public Component{
public:
    ComponentMessager();
    virtual ~ComponentMessager();

    void Dispatch(string command, GameObject* gameObject);
    void Broadcast(string command, vector<GameObject*> gameObjects);
    void Recieve(string command, GameObject* gameObject);
};


#endif //COMPONENTMESSAGER_H
