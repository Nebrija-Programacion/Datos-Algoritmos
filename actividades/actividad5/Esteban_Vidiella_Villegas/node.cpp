#include "node.h"

#include <iostream>

using namespace std;
node::node(persona d):
    personas(d),
    parents{{nullptr,nullptr}},
    visited{false}
{

}

array<node *,2> node::getParents() const
{
    return parents;
}

vector<node *> node::getChildren() const
{
    return children;
}

void node::setChildren(const vector<node *> &value)
{
    children = value;
}

void node::setParents(const array<node *, 2> &value)
{
    parents = value;
    for(auto* parent: value){
        parent->pushChild(this);
    }
}

void node::pushChild(node *child)
{
    children.push_back(child);
    child->pushParents(this);
}

void node::pushParents(node *parent)
{
    if (parents.at(0) && parents.at(1))
        throw new string{"Ni de cona"};

    if(parents.at(0)) parents.at(1) = parent;
    else parents.at(0) = parent;
}

void node::runThrough()
{
    if(visited) return;
    visited=true;
    cout << personas << endl;
    for(auto* parent: parents){
        if(parent) parent->runThrough(); ;
    }
    for(auto* child: children){
        child->runThrough();
    }
}

persona node::getPersona() const
{
    return personas;
}

void node::reset()
{
    if(!visited) return;
    visited=false;
    for(auto* child: children){
        if(child) child->reset();
    }
    for(auto* parent: parents){
        if(parent) parent->reset();
    }
}
