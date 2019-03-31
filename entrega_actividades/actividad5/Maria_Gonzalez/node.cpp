#include "node.h"
#include "persona.h"

Node::Node(Persona p):
    persona{p},
    parents{{nullptr, nullptr}},
    visited{false}
{

}


array < Node *, 2> Node::getParents() const
{
    return parents;
}

void Node::setParents(const array <Node *, 2> &value)
{
    parents = value;
    for (auto * parent: value){
        parent ->pushChild(this);
    }
}

void Node::pushChild(Node *child)
{
    children.push_back(child);
    child->pushParent(this);
}

void Node::pushParent(Node *parent)
{
    if(parents.at(0)) parents.at(1) = parent;
    else parents.at(0) = parent;
}

void Node::runThrough(int nivel) const
{
    espacios(nivel);
    cout << persona << endl;

    for (auto * parent: parents){
        espacios(nivel);
        cout << "Padre: " << endl;
        if(parent != nullptr) parent ->runThrough(nivel +5);//son los espacios
    }

    for(auto * child: children){
        espacios(nivel);
        cout << "Hijo -> " << child->getPersona();
    }
    cout << endl;
}

void Node::espacios(int n) const
{
    for(int i = 0; i<n; i++){
        cout << " ";
    }
}


Persona Node::getPersona()const
{
    return persona;
}

void Node::setPersona(Persona value)
{
    persona = value;
}

Node *Node::search(const Persona &p)
{
    if(visited) return nullptr;
    visited = true;

    if(persona == p) return this;

    for (auto* child: children){
        Node* aux = child->search(p);
        if(aux) return aux;
    }

    for(auto* parent: parents){
        Node* aux = parent->search(p);
        if(aux) return aux;
    }

    return nullptr;

}


