//
// Created by Mereslann on 21/10/2019.
//

#include "GameObject.h"
#include "ComponentMessager.h"

GameObject::GameObject() {
Components.insert(pair<string, Component*>("messager", new ComponentMessager()));
}

GameObject::~GameObject() {

}

bool GameObject::checkComponent(string componentKey) {
    for(auto const& component: Components){
        if(component.first == componentKey){
            return true;
        }
    }
    return false;
}

Component* GameObject::getComponent(string componentKey) {
    for(auto const& component: Components){
        if(component.first == componentKey){
            return component.second;
        }
    }
    return nullptr;
}

void GameObject::DisplayDescription() {
cout<< desc <<endl;
}

