#ifndef NODE_H
#define NODE_H

#include "data.h"

class Node
{

    friend bool operator == (Node const &n1, Node const &n2 );
    friend bool operator >= (Node const &n1, Node const &n2 );
    friend bool operator <= (Node const &n1, Node const &n2 );
    friend bool operator > (Node const &n1, Node const &n2 );
    friend bool operator < (Node const &n1, Node const &n2 );

    friend class Tree;

public:
    Node(Data* d);

    Data *getData() const;

protected:
    void push(Node* n);


private:
    Data* data;
    Node* parent;
    Node* left;
    Node* right;
};

bool operator == (Node const &n1, Node const &n2 );
bool operator >= (Node const &n1, Node const &n2 );
bool operator <= (Node const &n1, Node const &n2 );
bool operator > (Node const &n1, Node const &n2 );
bool operator < (Node const &n1, Node const &n2 );

#endif // NODE_H
