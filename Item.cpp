//
// Created by Mereslann on 1/10/2019.
//

#include "Item.h"

#include <utility>

Item::Item() {
}
Item::~Item() {}

void Item::DisplayName() {
    std::cout << name << ' ';
}

Item *Item::Copy() {
    Item * copy = new Item();
    *copy = *this;
    return copy;
}
//
//void Item::Display() {
//    struct Node* ptr;
//    ptr = head;
//    cout << "Items in " << name << ": ";
//    while(ptr != nullptr) {
//        ptr->data->DisplayName();
//        ptr = ptr->next;
//    }
//    cout <<endl;
//}