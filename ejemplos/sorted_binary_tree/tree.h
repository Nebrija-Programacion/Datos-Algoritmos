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

    Node *getFirst() const;
    void depthFirstRun() const;
    void breadthFirstRun() const;


protected:
    Node* first;
};

#endif // TREE_H
