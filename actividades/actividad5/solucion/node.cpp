#include "node.h"

Node::Node(Persona *p):
    persona{p},
    parents{{nullptr,nullptr}},
    printed{false},
    visited{false}
{

}

Persona *Node::getPersona() const
{
    return persona;
}

void Node::setPersona(Persona *value)
{
    persona = value;
}

void Node::addChildren(Node *n)
{
    children.push_back(n);
}

void Node::addParent(Node *p)
{
    if(parents.at(0) == nullptr){
        parents.at(0) = p;
    }
    else if(parents.at(1) == nullptr){
        parents.at(1) = p;
    }
    else throw string{"You already have two parents, cannot have more"};

    p->addChildren(this);
}

vector<Node *> Node::getChildren() const
{
    return children;
}

array<Node *, 2> Node::getParents() const
{
    return parents;
}

void Node::printDetails() const
{
    cout << "Nombre: " <<*persona << endl;
    cout << "Hijos: " << endl;
    for(auto p: children){
        if(p) cout << *(p->getPersona()) << endl;
    }

    cout << "Padres: " << endl;
    for(auto p: parents){
        if(p) cout << *(p->getPersona()) << endl;
    }
}

Node *Node::search(string name)
{
    if(visited) return nullptr;
    visited = true;

    if(name == *persona) return this;

    for(auto p: children){
        if(p){
            Node* aux = p->search(name);
            if(aux) return aux;
        }
    }

    for(auto p: parents){
        if(p){
            Node* aux = p->search(name);
            if(aux) return aux;
        }
    }

    return nullptr;
}

void Node::printAll()
{

    if(printed) return;
    printed = true;

    cout << *(persona) << endl;

    for(auto p: children){
        if(p) p->printAll();
    }

    for(auto p: parents){
        if(p) p->printAll();
    }
}

void Node::resetPrint()
{
    if(!printed) return;
    printed = false;
    for(auto p: children){
        if(p) p->resetPrint();
    }

    for(auto p: parents){
        if(p) p->resetPrint();
    }
}

void Node::resetVisited()
{
    if(!visited) return;
    visited = false;
    for(auto p: children){
        if(p) p->resetVisited();
    }

    for(auto p: parents){
        if(p) p->resetVisited();
    }
}
