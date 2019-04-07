#ifndef GRAPH_H
#define GRAPH_H

#include "node.h"
#include <set>
#include <vector>

using namespace std;

class Graph
{
public:
    Graph(Node* entryPoint = nullptr);
    void printAll();
    void link(Node* n1, Node* n2, bool twoWay = false);
    void printPath(Node* dest, bool dijkstra = true);

    void setEntryPoint(Node *value);

    bool computeDijkstraPath(Node* dest);

    vector<Node*> getPath(Node* dest);

private:
    Node* entryPoint;
    bool computePath(Node* dest);
    set<Node*> allNodes;


};

#endif // GRAPH_H
