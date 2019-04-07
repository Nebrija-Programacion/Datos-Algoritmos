#ifndef NODE_H
#define NODE_H

#include <array>
#include <iostream>
#include <vector>
#include "persona.h"
using namespace std;

class node
{
public:
    node(persona d);
    array<node *, 2> getParents() const;
    vector<node *> getChildren() const;
    void setChildren(const vector<node *> &value);

    void setParents(const array<node *, 2> &value);
    void pushChild(node* child);

    void pushParents(node* parent);

    void runThrough();

    persona getPersona() const;


    void reset();

private:
    persona personas;
    array<node*,2>parents;
    vector<node*>children;
    bool visited;
};

#endif // NODE_H
