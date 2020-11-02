//
// Created by steve on 29/10/2019.
//

#include "ComponentLock.h"

ComponentLock::ComponentLock() {
_locked = true;
}

void ComponentLock::Lock() {
_locked = true;
}

void ComponentLock::Unlock() {
_locked = false;
}

bool ComponentLock::isLocked() {
    return _locked;
}
