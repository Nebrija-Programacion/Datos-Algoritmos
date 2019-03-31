#include "node.h"

Node::Node(Data *_ID):
    ID{_ID},
    papus{nullptr}
{

}

Data *Node::getID() const
{
    return ID;
}

void Node::setID(Data *value)
{
    ID = value;
}

array<Node *, 2> Node::getPapus() const
{
    return papus;
}

void Node::setPapus(const array<Node *, 2> &value)
{
    papus = value;
}

Node *Node::getPareja() const
{
    return pareja;
}

void Node::setPareja(Node *value)
{
    pareja = value;
    value->setPareja(this);
}

vector<Node *> Node::getHijitos() const
{
    return hijitos;
}

void Node::setHijitos(const vector<Node *> &value)
{
    hijitos = value;
}
