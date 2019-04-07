#ifndef TREE_H
#define TREE_H

#include "node.h"

class Tree
{
public:
    Tree();

    Node *getMe() const;
    void setMe(Node *value);

    void printAll() const;
    Node* search(string name);

private:
    Node* me;
};

#endif // TREE_H
