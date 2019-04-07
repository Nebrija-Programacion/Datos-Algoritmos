#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <array>
#include <vector>
#include "persona.h"

using namespace std;

class Node
{
public:
    Node (Persona p);

    Persona getPersona() const;

    array<Node *, 2> getParents() const;
    void setParents(const array<Node *, 2> &value);

    vector<Node *> getChildren() const;
    void setChildren(const vector<Node *> &value);

    void pushChild(Node * child);
    void pushParent(Node * parent);
    void runThrough();
    Node * search(const Persona &p);
    void reset();

private:

    Persona persona;
    array<Node*,2>parents;
    vector<Node*>children;
    bool visited;

};

#endif // NODE_H
