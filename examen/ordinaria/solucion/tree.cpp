#include "tree.h"

Tree::Tree():
    entryPoint{nullptr}
{

}

void Tree::print() const
{
    if(entryPoint) entryPoint->print();

}

void Tree::push(unsigned int value)
{
    Node* n = new Node(value);
    if(entryPoint) entryPoint->push(n);
    else entryPoint = n;
}

Node *Tree::search(unsigned int value)
{
    if(entryPoint) return entryPoint->search(value);
    else return nullptr;
}

void Tree::erase(Node *n)
{
    if(!n) throw new string{"null node"};
    if(!n->getParent()) throw new string{"cannot delete entry node"};

    // get parent of node to erase
    Node* parent = n->getParent();

    // get children of node to erase
    array<Node*,4> children = n->getChildren();

    //set parent link to node o nullptr
    for (auto & aux: parent->getChildren()){
        if(aux == n){
            aux = nullptr;
            break;
        }
    }

    // erase node
    delete n;
    n = nullptr;

    // push children to parent
    for(auto child : children){
        if(child) parent->push(child);
    }
}
