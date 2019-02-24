#ifndef LIST_H
#define LIST_H

#include "node.h"
#include "data.h"

#include <iostream>

using namespace std;

class List
{
public:
    List();
    ~List();

    Node *getFirst() const;
    void setFirst(Node *value);

    Node *getLast() const;
    void setLast(Node *value);

    unsigned int getSize() const;
    void setSize(unsigned int value);

    void push_back(Data* d);
    void moveDown(Node *n);
    void rockSort();

private:
    Node* first;
    Node *last;
    unsigned int size;
};

ostream & operator<<(ostream & os, List const &  l);

#endif // LIST_H
