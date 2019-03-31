#include "node.h"

Node::Node(Data *d):
    data{d},
    next{nullptr},
    prev{nullptr}
{
}

Node::~Node()
{
    delete data;
    if(next) delete next;
    next = nullptr;
}

Data *Node::getData() const
{
    return data;
}

void Node::setData(Data *value)
{
    data = value;
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

void Node::print() const
{
    data->print();
}


bool operator<(Node const & n1, Node const & n2)
{
    return ( n1.getData()->getValue() <
             n2.getData()->getValue()   );
}


bool operator>(Node const & n1, Node const & n2)
{
    return *(n1.getData()) > *(n2.getData());
}


bool operator==(Node const & n1, Node const & n2)
{
    return *(n1.getData()) == *(n2.getData());
}


bool operator!=(Node const & n1, Node const & n2)
{
    return *(n1.getData()) != *(n2.getData());
}


bool operator<=(Node const & n1, Node const & n2)
{
    return *(n1.getData()) <= *(n2.getData());
}


bool operator>=(Node const & n1, Node const & n2)
{
    return *(n1.getData()) >= *(n2.getData());
}




