//
// Created by Mereslann on 9/09/2019.
//

#ifndef INVENTORY_H
#define INVENTORY_H

//#include "GameObject.h"


#include <iostream>
#include <string>
#include "GameObject.h"


using namespace std;

class Item;

struct Node {
    Item* data;
    struct Node *prev;
    struct Node *next;
};

class Inventory{
public:
    Inventory();
    virtual ~Inventory();

    void Insert(Item* newdata);
    void Display();
    string DisplayItem(string item);
    void Delete(Node** head_ref, Node* del);
    Item* GetItem(string item);

    Node* GetNode(Item* data);

    Node* head;

    void MoveItem(Inventory *inv, Item *item);

    bool ItemExists(Item *item);

    bool ItemExists(string item);
};


#endif //INVENTORY_H
