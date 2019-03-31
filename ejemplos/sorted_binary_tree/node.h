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
    friend std::ostream & operator << (std::ostream & os, Node const &d);
    friend class Tree;

public:
    Node(Data* d);

    Data *getData() const;
    Node *getLeft() const;
    Node *getParent() const;
    Node *getRight() const;

    void depthFirstRun() const;
    void printLevel(int setHeight) const;

protected:
    void push(Node* n);


private:
    int height;
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

std::ostream & operator << (std::ostream & os, Node const &d);

#endif // NODE_H
