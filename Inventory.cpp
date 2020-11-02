//
// Created by Mereslann on 9/09/2019.
//

#include "Inventory.h"
#include "Item.h"
#include <iostream>
using namespace std;


//Adds a node to the start of the List
void Inventory::Insert(Item* newdata) {
    auto* newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->data  = newdata;
    // node is always at start so prev is always null
    newnode->prev = nullptr;
    newnode->next = head;
    if(head !=  nullptr)
        head->prev = newnode ;
    head = newnode;
}
void Inventory::Display() {
    struct Node* ptr;
    ptr = head;
    cout << "Items: ";
    while(ptr != nullptr) {
        ptr->data->DisplayName();
        ptr = ptr->next;
    }
    cout <<endl;
}


string Inventory::DisplayItem(string item){
    struct Node* ptr;
    ptr = head;
    while(ptr != nullptr) {
        if(ptr->data->name == item){
            return "The "+ ptr->data->name + " looks like " + ptr->data->desc + "\n";
        }
        ptr = ptr->next;
    }
    return "Sorry i couldn't find " + item + "\n";
}

void Inventory::Delete(Node** head_ref, Node* del) {
    /* base case */
    if (*head_ref == nullptr || del == nullptr)
        return;

    /* If node to be deleted is head node */
    if (*head_ref == del)
        *head_ref = del->next;

    /* Change next only if node to be
    deleted is NOT the last node */
    if (del->next != nullptr)
        del->next->prev = del->prev;

    /* Change prev only if node to be
    deleted is NOT the first node */
    if (del->prev != nullptr)
        del->prev->next = del->next;

    /* Finally, free the memory occupied by del*/
    free(del);
}

void Inventory::MoveItem(Inventory* inv, Item* item){
    inv->Insert(item);
    Delete(&head, GetNode(item));
}

bool Inventory::ItemExists(Item* item){
    return GetNode(item) != nullptr;
}

bool Inventory::ItemExists(string item){
    return GetNode(GetItem(item)) != nullptr;
}

Item* Inventory::GetItem(string item){
    struct Node* ptr;
    ptr = head;
    while(ptr != nullptr) {
        if(ptr->data->name == item){
            return ptr->data;
        }
        ptr = ptr->next;
    }
    return nullptr;
}

Node* Inventory::GetNode(Item* data){
    struct Node* ptr;
    ptr = head;
    while(ptr != nullptr) {
        if(ptr->data == data){
            return ptr;
        }
        ptr = ptr->next;
    }
    return nullptr;
}



Inventory::Inventory() {
    Inventory::head = nullptr;
};

Inventory::~Inventory() = default;