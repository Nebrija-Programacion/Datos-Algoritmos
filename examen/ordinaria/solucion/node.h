#ifndef NODE_H
#define NODE_H

#include <array>
#include <iostream>

using namespace std;

class Node
{
public:
    Node(unsigned int data);

    void push(Node* n);
    void printNode() const;
    void print() const;
    Node* search(unsigned int value);

    unsigned int getData() const;

    void setParent(Node *value);

    Node *getParent() const;

    array<Node *, 4> &getChildren();

private:
    array<Node*, 4> children;
    Node* parent;
    unsigned int data;

};

#endif // NODE_H
