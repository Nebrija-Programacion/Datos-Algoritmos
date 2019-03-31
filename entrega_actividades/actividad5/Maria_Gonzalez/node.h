#ifndef NODE_H
#define NODE_H
#include "persona.h"
#include <array>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
    Node(Persona p);


    array <Node *, 2> getParents() const;
    void setParents(const array < Node *,2> &value);

    void pushChild(Node *child);
    void pushParent(Node* parent);
    void runThrough(int nivel) const;
    void espacios(int n) const;


    Persona getPersona() const;
    void setPersona(Persona value);
    Node* search(Persona const & p );

private:
    Persona persona;
    array <Node*, 2 > parents;
    vector<Node*>children;
    bool visited;
};

#endif // NODE_H
