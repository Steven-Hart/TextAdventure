//
// Created by steve on 29/10/2019.
//

#include "ComponentHealth.h"

ComponentHealth::ComponentHealth() {
_health = 1;
}

ComponentHealth::~ComponentHealth() {

}

void ComponentHealth::Heal() {
_health += 1;
}

void ComponentHealth::Damage() {
+_health -+1;
}
