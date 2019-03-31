#ifndef NODE_H
#define NODE_H

#include "data.h"
#include <iostream>
using namespace std;
class Node
{
public:
    Node(Data *d);

    Data *getDato() const;
    void setDato(Data *value);

    Node *getNext() const;
    void setNext(Node *value);

    Node *getPrev() const;
    void setPrev(Node *value);
    void print();

private:
    Node *prev;
    Node *next;
    Data *dato;
};

#endif // NODE_H
