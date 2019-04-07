#include "tree.h"

Tree::Tree()
{

}

Node *Tree::getMe() const
{
    return me;
}

void Tree::setMe(Node *value)
{
    me = value;
}

void Tree::printAll() const
{
    if(!me) return;
    me->resetPrint();
    me->printAll();
}

Node *Tree::search(string name)
{
    if(!me) return nullptr;
    me->resetVisited();
    return me->search(name);
}
