//
// Created by Mereslann on 1/10/2019.
//

#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <map>


#include "location.h"

using namespace std;

struct Edge {
    string command;
    int dest;
    int src;
//    Location src, dest;
};

class Graph {
public:
    std::map<int , map<string, int>> adjList;
    Graph(const vector<Edge> &edges, const vector<Location> &locations);

    virtual ~Graph();

    void printAllLocations();
    void printAdjLocations(int id);
    Location * getNewLocation(int src, string command);

    vector<Location> locations;
};


#endif //GRAPH_H
