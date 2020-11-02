//
// Created by Mereslann on 28/10/2019.
//

#include "ComponentMessager.h"
#include "ComponentHealth.h"
#include "ComponentLock.h"
#include "ComponentGameObject.h"
#include "GameObject.h"

ComponentMessager::ComponentMessager() {

}

ComponentMessager::~ComponentMessager() {

}

void ComponentMessager::Dispatch(string command, GameObject* gameObject) {
    dynamic_cast<ComponentMessager *>(gameObject->getComponent("messeger"))->Recieve(command, gameObject);
}

void ComponentMessager::Recieve(string command, GameObject* gameObject) {
if(command == "unlock" || command == "open"){
    dynamic_cast<ComponentLock *>(gameObject->getComponent("lock"))->Unlock();
}
    if(command == "lock"){
        dynamic_cast<ComponentLock *>(gameObject->getComponent("lock"))->Lock();
    }
if(command == "damage"){
    dynamic_cast<ComponentHealth *>(gameObject->getComponent("health"))->Damage();
}
if(command == "info"){
    gameObject->DisplayName();
    gameObject->DisplayDescription();
}
}

void ComponentMessager::Broadcast(string command, vector<GameObject *> gameObjects) {
for(auto const& gameObject: gameObjects){
    dynamic_cast<ComponentMessager *>(gameObject->getComponent("messeger"))->Recieve(command, gameObject);
}
}






