#ifndef NODE_H
#define NODE_H

#include <set>

#include "data.h"

using namespace std;

class Node
{
    friend bool operator == (Node const & n1, Node const & n2);
    friend ostream & operator << (ostream & os, Node const & n);

    friend class Graph;

public:
    Node(Data *d);

    Data *getData() const;
    void setData(Data *value);

    set<Node *> getNeighbours() const;
    void setNeighbours(const set<Node *> &value);

protected:
    void printAll();
    void resetVisited();
    void addNeighbour(Node *n);
    Node *computePath(Node* dest);
    void printPath();

private:
    set<Node *> neighbours;
    Data* data;
    bool visited;
    Node* next;

};

bool operator == (Node const & n1, Node const & n2);
ostream & operator << (ostream & os, Node const & n);

#endif // NODE_H
