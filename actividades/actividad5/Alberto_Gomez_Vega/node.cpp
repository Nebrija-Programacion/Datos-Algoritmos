#include "node.h"

Node::Node(Persona p):
    persona{p},
    parents{nullptr,nullptr}
{
    visited = false;

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

    for (auto * parent: value){
        parent->pushChild(this);
    }
}
vector<Node *> Node::getChildren() const
{
    return children;
}
void Node::setChildren(const vector<Node *> &value)
{
    children = value;
}
void Node::pushChild(Node *child)
{
    children.push_back(child);
    child->pushParent(this);
}
void Node::pushParent(Node *parent)
{
    if (parents.at(0) && parents.at(1))//Si los dos estan ocupados no se puede
        throw string {"No se puede"};

    if (parents.at(0)) parents.at(1) = parent;
    else parents.at(0) = parent;
}
void Node::runThrough() //Recorrer
{
    if(visited) return;

    visited = true;

    cout << persona << endl;

    for (auto* parent: parents){
        if (parent) parent->runThrough();
    }

    for (auto* child: children){
        child->runThrough();
    }
}
Node *Node::search(const Persona &p)
{
    if(visited) return nullptr;
    visited = true;

    if (persona == p) return this;

    for (auto* child: children){
        Node* aux = child->search(p);
        if (aux) return aux;
    }
    for (auto* parent: parents){
        Node* aux = parent->search(p);
        if (aux) return aux;
    }
    return nullptr;
}
void Node::reset()
{
    if(!visited) return;
    visited = false;
    for(auto * child: children){
        if (child) child->reset();
    }
    for(auto * parent : parents){
        if(parent) parent->reset();
    }
}

