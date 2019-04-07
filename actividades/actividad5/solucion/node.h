#ifndef NODE_H
#define NODE_H

#include <vector>
#include <array>

#include "persona.h"

using namespace std;

class Node
{
    friend class Tree;
public:
    Node(Persona * p);

    Persona *getPersona() const;
    void setPersona(Persona *value);

    void addParent(Node* p);

    vector<Node *> getChildren() const;

    array<Node *, 2> getParents() const;

    void printDetails() const;

    Node* search(string name);

protected:
    void printAll();
    Persona* persona;
    vector<Node*> children;
    array<Node*,2> parents;
    void resetPrint();
    void resetVisited();
    bool printed;
    bool visited;

private:
    void addChildren(Node* n);
};

#endif // NODE_H
