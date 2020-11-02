//
// Created by Mereslann on 1/10/2019.
//

#include "Location.h"

#include <utility>

Location::Location(int id, string name, string desc){
    this->id = id;
    this->name = name;
    this->desc = desc;
}

Location::Location() {

};


Location::~Location() = default;
