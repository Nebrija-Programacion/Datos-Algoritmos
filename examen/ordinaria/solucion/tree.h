#ifndef TREE_H
#define TREE_H

#include "node.h"

class Tree
{
public:
    Tree();
    void print() const;
    void push(unsigned int value);
    Node* search(unsigned int value);
    void erase(Node* n);
private:
    Node* entryPoint;
};

#endif // TREE_H
