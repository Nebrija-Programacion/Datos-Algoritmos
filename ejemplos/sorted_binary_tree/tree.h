#ifndef TREE_H
#define TREE_H

#include "node.h"
#include "data.h"

class Tree
{
public:
    Tree();
    void push(Data *d);
    Node* search(Data const & d);

protected:
    Node* first;
};

#endif // TREE_H
