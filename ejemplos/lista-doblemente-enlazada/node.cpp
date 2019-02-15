#include "node.h"

Node::Node(Data *d):
    next{nullptr},
    prev{nullptr},
    data{d}
{

}

void Node::push_back(Data *d)
{
    if(next) next->push_back(d);
    else{
        next = new Node(d);
        next->setPrev(this);
    }
}

void Node::insert_after(Data *d)
{
    Node* aux = new Node(d);
    if(next){
        aux->setNext(next);
        aux->setPrev(this);
        next = aux;
        aux->getNext()->setPrev(aux);
    }else{
        push_back(d);
    }
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

Data *Node::getData() const
{
    return data;
}

void Node::setData(Data *value)
{
    data = value;
}
