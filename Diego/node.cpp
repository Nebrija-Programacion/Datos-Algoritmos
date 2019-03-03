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

Node *Node::search(int value)
{
    if(this->getData()->getValue() == value){
        return this;
    }else{
        return next->search(value);
    }
}

Node *Node::searchb(int value, Node *Frst, Node *Lst)
{

}


bool operator<(Node const & n1, Node const & n2)
{
    Data d1 = *(n1.getData());
    Data d2 = *(n2.getData());
    return ( d1 < d2 );
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
