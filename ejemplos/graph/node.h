#ifndef NODE_H
#define NODE_H

#include <vector>
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

    vector<Node *> getNeighbours() const;
    void setNeighbours(const vector<Node *> &value);

protected:
    void printAll();
    void resetVisited();
    void addNeighbour(Node *n);
    Node *computePath(Node* dest);
    void printPath();

private:
    vector<Node*> neighbours;
    Data* data;
    bool visited;
    Node* next;

};

bool operator == (Node const & n1, Node const & n2);
ostream & operator << (ostream & os, Node const & n);

#endif // NODE_H
