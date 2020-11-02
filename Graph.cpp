//
// Created by Mereslann on 1/10/2019.
//

#include "Graph.h"

Graph::Graph(vector<Edge> const &edges, vector<Location> const &loc) {
// resize the vector to N elements of type vector<int>

    locations = loc;

    // add edges to the directed graph
    for (auto &edge: edges)
    {
        // insert at the end
        adjList[edge.src].insert(pair<string, int>(edge.command, edge.dest));
//        adjList[edge.src].push_back(edge.dest);

        // Uncomment below line for undirected graph
//         adjList[edge.dest].push_back(edge.src);
    }
}


void Graph::printAllLocations() {
    for (auto const& x : adjList)
    {
        cout << "Availiable Locations from " << locations[x.first].name  // string (key)
             << " : \n";
        for(auto const& src : x.second){
            cout << src.first << " to " << locations[src.second].name;
        }
        cout <<endl ;
    }
}

void Graph::printAdjLocations(int id){
    for (auto const& x : adjList)
    {
        if(x.first == id){
            cout << "Availiable Locations from " << locations[x.first].name  // string (key)
                 << " : \n";
            for(auto const& src : x.second){
                cout << src.first << " to " << locations[src.second].name;
            }

            cout <<endl ;
        }
    }
}

Location * Graph::getNewLocation(int src, string command) {
    for (auto const& x : adjList)
    {
        if(x.first == src){
            for(auto const& src : x.second){
                if(src.first == command){
                    return &locations[src.second];
                }
            }
        }
    }
    return &locations[src];
}



Graph::~Graph() = default;



