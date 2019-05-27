#include "node.h"

Node::Node(unsigned int data):
    children{{nullptr, nullptr, nullptr, nullptr}},
    parent{nullptr},
    data{data}
{

}

void Node::push(Node *n)
{
    // Multiplo
    if(n->getData() % data == 0 || n->getData() == data){
        if(children.at(0)) children.at(0)->push(n);
        else{
            children.at(0) = n;
            n->setParent(this);
        }
        return;
    }

    // Divisor
    if(data % n->getData() == 0){
        if(children.at(1)) children.at(1)->push(n);
        else{
            children.at(1) = n;
            n->setParent(this);
        }
        return;
    }

    // Par
    if(n->getData() % 2 == 0){
        if(children.at(2)) children.at(2)->push(n);
        else{
            children.at(2) = n;
            n->setParent(this);
        }
        return;
    }

    // Impar (es la unica opcion que queda, asi que no hacemos condicion
    if(children.at(3)) children.at(3)->push(n);
    else{
        children.at(3) = n;
        n->setParent(this);
    }
}

void Node::printNode() const
{
    // Print node and its children (if any)
    cout << "Node: " << data << endl;
    cout << "Children: " << endl;
    for(auto child: children){
        if(child) cout << "- " << child->getData() << endl;
    }
    cout << "-------------------" << endl;
}

void Node::print() const
{
    cout << data << " - ";
    for(auto child: children){
        if(child) child->print();
    }
}

Node *Node::search(unsigned int value)
{

    if(data == value) return this;

    // Multiplo
    if(value % data == 0){
        if(children.at(0)) return children.at(0)->search(value);
    }

    // Divisor
    if(data % value == 0){
        if(children.at(1)) return children.at(1)->search(value);
    }

    // Par
    if(value % 2 == 0){
        if(children.at(2)) return children.at(2)->search(value);
    }

    // ImPar
    if(value % 2 != 0){
        if(children.at(3)) return children.at(3)->search(value);
    }

    // Not found
    return nullptr;


}

unsigned int Node::getData() const
{
    return data;
}

void Node::setParent(Node *value)
{
    parent = value;
}

Node *Node::getParent() const
{
    return parent;
}

array<Node *, 4> & Node::getChildren()
{
    return children;
}
