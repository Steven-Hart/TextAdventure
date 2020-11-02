//
// Created by steve on 29/10/2019.
//

#ifndef COMPONENTHEALTH_H
#define COMPONENTHEALTH_H

#include "Component.h"

class ComponentHealth : public Component{
public:
    ComponentHealth();
    virtual ~ComponentHealth();

    void Heal();
    void Damage();

private:
    int _health;
};


#endif //COMPONENTHEALTH_H
