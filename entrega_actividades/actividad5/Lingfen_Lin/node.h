#ifndef NODE_H
#define NODE_H

#include <array>
#include <vector>

#include "persona.h"

using namespace std;

class Node
{
public:
    Node(Persona p);

    array<Node *, 2> getParents() const;
    void setParents(const array<Node *, 2> &value);
    void pushChild(Node* child);

    void pushParent(Node* parent);

    void runThrough();

    Persona getPersona() const;

    Node* search(Persona const & p);

private:
    Persona persona;
    array<Node*, 2> parents;
    vector<Node* > children;
    bool visited;
};

#endif // NODE_H
