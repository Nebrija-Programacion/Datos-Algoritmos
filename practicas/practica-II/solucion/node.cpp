#include "node.h"

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
