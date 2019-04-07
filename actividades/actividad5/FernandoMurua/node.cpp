#include "node.h"

Node::Node(Persona *d):
    data{d},
  padres{{nullptr,nullptr}}

{
visitado =false;
}



vector<Node *> Node::getHijos() const
{
    return hijos;
}

void Node::setHijos(const vector<Node *> &value)
{

    hijos=value;
}

array<Node *, 2> Node::getPadres() const
{
    return padres;
}

void Node::setPadres(const array<Node *, 2> &value)
{
    padres = value;
}

void Node::runThrough()
{
    if(visitado) return;
    visitado =true;
    cout << data->getNombre() <<" " << data->getApellidos() << endl;
    for(auto *papis:padres){
        if(papis) papis->runThrough();

    }
    for(auto *hijitos:hijos){
        if(hijitos) hijitos->runThrough();
    }
}

Persona *Node::getData() const
{
    return data;
}

void Node::setData(Persona *value)
{
    data = value;
}



