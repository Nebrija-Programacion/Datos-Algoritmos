#include "node.h"

Node::Node(Data *d):
    dato{d}
{

}

Data *Node::getDato() const
{
    return dato;
}

void Node::setDato(Data *value)
{
    dato = value;
}

Node *Node::getNext() const
{
    return next;
}

void Node::setNext(Node *value)
{
    next = value;
}

Node *Node::getPrev() const
{
    return prev;
}

void Node::setPrev(Node *value)
{
    prev = value;
}

void Node::print()
{
    cout << dato->getDato() << " - ";
    if(next){
        next->print();
    }
}



