#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <array>
#include <vector>
#include <persona.h>

using namespace std;

class Node
{
private:
    bool visitado;
    Persona persona;
    array <Node*, 2> parents;
    vector <Node*> child;
public:
    Node(Persona p);

    array<Node *, 2> getParents() const;
    void setParents(const array<Node *, 2> &value);

    vector<Node *> getChild() const;
    void setChild(const vector<Node *> &value);

    void pushChild(Node *children);
    void pushParent(Node *parent);

    void runThrough();
    Node *search(const Persona &p);
    void reset();

    Persona getPersona() const;
};

#endif // NODE_H
