#include "node.h"
#include <iostream>

using namespace std;

Node::Node(Persona p):
    persona{p},
    parents{{nullptr, nullptr}},
    visited{false}
{}

array<Node *, 2> Node ::getParents() const
{
    return parents;
}


void Node::setParents(const array<Node *, 2> & value)
{
    parents = value;
    for(auto * parent: value){
        parent-> pushChild(this);
    }
}

void Node::pushChild(Node *child)
{
    children.push_back(child);
    child->pushParent(this);
}

void Node::pushParent(Node *parent)
{
    if(parents.at(0) && parents.at(1))
        throw new string{"Ni de coña"};

    if(parents.at(0)) parents.at(1) = parent;
    else parents.at(0) = parent;
}

void Node::runThrough()
{

    if(visited) return;

    visited = true;

    cout << persona << endl;
    for(auto * parent: parents)
    {
        if(parent) parent->runThrough();
    }

    for(auto * child: children)
    {
        child->runThrough();
    }
}

Persona Node::getPersona() const
{
    return persona;
}

Node *Node::search(const Persona &p)
{
    if(visited) return nullptr;
    visited = true;

    if (persona == p) return this;
    for (auto* child: children)
    {
        Node* aux = child->search(p);
        if(aux) return aux;
    }

    for(auto* parent: parents){
        Node* aux = parent->search(p);
        if(aux) return aux;
    }

    return nullptr;
}
