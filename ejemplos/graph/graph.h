#ifndef GRAPH_H
#define GRAPH_H

#include "node.h"

class Graph
{
public:
    Graph(Node* entryPoint = nullptr);
    void printAll();
    void link(Node* n1, Node* n2, bool twoWay = false);
    void printPath(Node* dest);

private:
    Node* entryPoint;
    bool computePath(Node* dest);

};

#endif // GRAPH_H
