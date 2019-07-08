#include "node.h"

Node::Node(unsigned int data):
    data{data},
    prev{nullptr},
    next{nullptr}
{

}

unsigned int Node::getData() const
{
    return data;
}

void Node::setData(unsigned int value)
{
    data = value;
}

Node *Node::getNext() const
{
    return next;
}

Node *Node::getPrev() const
{
    return prev;
}

void Node::insertBefore(Node *n)
{
    // si soy el ultimo (por la izquierda) lo meto
    if(!prev){
        prev = n;
        n->next = this;
        return;
    }

    // Si es menor que el anterior, se lo paso al anterior
    if(* n < *prev){
        prev->insertBefore(n);
    }else{
        // si no, lo meto en medio
        Node* aux_prev = prev;
        prev = n;
        n->next = this;
        aux_prev->next = n;
        n->prev = aux_prev;
    }
}

void Node::insertAfter(Node *n)
{
    // si soy el ultimo (por la derecha) lo meto
    if(!next){
        next = n;
        n->prev = this;
        return;
    }

    // Si es mayor que el siguiente, se lo paso al siguiente
    if(*next < *n){
        next->insertAfter(n);
    }else{
        // si no, lo meto en medio
        Node* aux_next = next;
        next = n;
        n->prev = this;
        aux_next->prev = n;
        n->next = aux_next;
    }
}

Node *Node::searchBefore(unsigned int d)
{
    if(data == d) return this; //si soy yo, me devuelvo
    if(d > data) return nullptr; // si es mayor que yo, no puede estar antes, devuevlo nullptr;
    if(prev) return prev->searchBefore(d); // si hay prev, le paso la busqueda.
    return nullptr; // no esta.
}

Node *Node::searchAfter(unsigned int d)
{
    if(data == d) return this; //si soy yo, me devuelvo
    if(d < data) return nullptr; // si es menor que yo, no puede estar despues, devuevlo nullptr;
    if(next) return next->searchAfter(d); // si hay next, le paso la busqueda.
    return nullptr; // no esta.
}

bool operator < (const Node &n1, const Node &n2)
{
    return n1.data < n2.data;
}

ostream &operator <<(ostream &os, const Node &n)
{
    os << n.data;
    return os;
}
