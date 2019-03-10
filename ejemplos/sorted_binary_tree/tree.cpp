#include "tree.h"

Tree::Tree():
    first{nullptr}
{

}

void Tree::push(Data* d)
{
    Node* n = new Node(d);
    if(!first)
        first = n;
    else
        first->push(n);
}

Node *Tree::search(const Data &d)
{
    Node* it = first;

    while(it){
        if( *(it->data) == d) return it;
        else if( *(it->data) > d) it = it->left;
        else if( *(it->data) < d) it = it->right;
    }

    return nullptr;
}

Node *Tree::getFirst() const
{
    return first;
}

void Tree::depthFirstRun() const
{
    if(first) first->depthFirstRun();
}


