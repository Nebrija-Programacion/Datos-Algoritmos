#include "node.h"
#include <iostream>

using namespace std;

Node::Node(Data *d):
    data{d},
    parent{nullptr},
    left{nullptr},
    right{nullptr}
{

}

void Node::push(Node *n)
{
    if( *n > *this){
        if(right)
            right->push(n);
        else{
            right = n;
            n->parent = this;
        }
    }else{
        if(left)
            left->push(n);
        else{
            left = n;
            n->parent = this;
        }
    }
}

Node *Node::getRight() const
{
    return right;
}

void Node::depthFirstRun() const
{
    cout << *(this) << endl;
    if(left) left->depthFirstRun();
    if(right) right->depthFirstRun();

}


Node *Node::getParent() const
{
    return parent;
}

Node *Node::getLeft() const
{
    return left;
}

Data *Node::getData() const
{
    return data;
}

bool operator ==(const Node &n1, const Node &n2)
{
    return ( *(n1.data) == *(n2.data));
}

bool operator <=(const Node &n1, const Node &n2)
{
    return ( *(n1.data) <= *(n2.data));
}

bool operator >=(const Node &n1, const Node &n2)
{
    return ( *(n1.data) >= *(n2.data));
}

bool operator >(const Node &n1, const Node &n2)
{
    return ( *(n1.data) > *(n2.data));
}

bool operator <(const Node &n1, const Node &n2)
{
    return ( *(n1.data) < *(n2.data));
}

std::ostream &operator <<(std::ostream &os, const Node &d)
{
    os << *(d.data);
    return os;
}
