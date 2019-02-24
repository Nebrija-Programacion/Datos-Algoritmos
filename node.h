#ifndef NODE_H
#define NODE_H
#include "data.h"

class Node{
public:
    Node(Data *da);

    Node *getNext() const;
    void setNext(Node *value);

    Node *getPrev() const;
    void setPrev(Node *value);

    Data *getDato() const;
    void setDato(Data *value);

private:
    Node *next;
    Node *prev;
    Data *dato;
};
#endif // NODE_H
