#include "node.h"

Node::Node(Persona p):
    persona{p},
    parents{nullptr,nullptr}
{
    visitado = false;
}

void Node::reset()
{
    if(!visitado) return;

    visitado = false;

    for(auto * n: child){
        n->reset();
    }

    for(auto * parent : parents){
        if(parent) parent->reset();
    }
}

Persona Node::getPersona() const
{
    return persona;
}

array<Node *, 2> Node::getParents() const
{
    return parents;
}

void Node::setParents(const array<Node *, 2> &value)
{
    parents = value;

    for(auto * parents : value){
        parents->pushChild(this);
    }
}

vector<Node *> Node::getChild() const
{
    return child;
}

void Node::setChild(const vector<Node *> &value)
{
    child = value;
}

void Node::pushChild(Node *children)
{
    child.push_back(children);
    children->pushParent(this);
}

void Node::pushParent(Node *parent)
{
    if(parents.at(0) && parents.at(1)) throw new string{"No puede ser"};

    if(parents.at(0)) parents.at(1) = parent;
    else parents.at(0) = parent;
}

void Node::runThrough()
{
    if(visitado) return;

    visitado = true;

    cout << persona << endl;

    for(auto * parent : parents){
        if(parent) parent->runThrough();
    }

    for(auto * children : child){
        children->runThrough();
    }
}

Node *Node::search(const Persona &p)
{
    if(visitado) return nullptr;

    visitado = true;

    if(persona == p) return this;

    for(auto *children : child){
        Node *aux = children->search(p);
        if(aux) return aux;
    }

    for(auto *parent : parents){
        Node *aux = parent->search(p);
        if(aux) return aux;
    }

    return nullptr;
}
