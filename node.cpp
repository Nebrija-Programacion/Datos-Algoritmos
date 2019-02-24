#include "node.h"

Node::Node(Data *da){
    dato=da;
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

Data *Node::getDato() const
{
return dato;
}

void Node::setDato(Data *value)
{
dato = value;
}
