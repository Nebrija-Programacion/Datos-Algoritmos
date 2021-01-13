#include "node.h"
Node::Node(Data *d)
{
   nombre=*d;
   visitado=false;
}

Data Node::getNombre() const
{
    return nombre;
}

void Node::setNombre(const Data &value)
{
    nombre = value;
}

array<Node *, 2> Node::getParents() const
{
    return parents;
}

void Node::setParents(const array<Node *, 2> &value)
{
    parents = value;
}

vector<Node *> Node::getChildren() const
{
    return children;
}

void Node::setChildren(const vector<Node *> &value)
{
    children = value;
}

bool Node::getVisitado() const
{
    return visitado;
}

void Node::setVisitado(bool value)
{
    visitado = value;
}

void Node::pushChild(Node *child)
{
    children.push_back(child);
    child->pushParent(this);
}

void Node::pushParent(Node *parent)
{
    if(parents.at(0) && parents[1]){
        throw string{"Noooo"};
    }
    if(parents[0]){
        parents[1]=parent;
    }
    else{
        parents[0]=parent;
    }
}

void Node::search(Data &person)
{
    if(visitado){
        return nullptr;
    }
    visitado=true;

    if(persona==person){
        return this;
    }
    for(auto* child:children){
        Node* c=child->search(person);
        if(c){
            return c;
        }
    }
    for(auto* parent:parents){
        Node *p=parent->search(person);
        if(p){
            return p;
        }
    }

}

void Node::runThrough()
{
    if(visited) return;

    visited=true;
    cout<<persona<<endl;
    for(auto* child:children){
        child->runThrough();
    }
    for(auto* parent: parents){
        if(parent) parent->runThrough();
    }
}
