//
// Created by steve on 29/10/2019.
//

#ifndef COMPONENTLOCK_H
#define COMPONENTLOCK_H

#include "Component.h"

class ComponentLock : public Component{
public:
    ComponentLock();

    void Lock();
    void Unlock();
    bool isLocked();

private:
    bool _locked;
};


#endif //COMPONENTLOCK_H
