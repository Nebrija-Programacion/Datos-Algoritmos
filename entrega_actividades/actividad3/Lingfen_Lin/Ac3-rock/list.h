#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"
#include "data.h"
using namespace std;

class List{
public:
    List();
    ~List();
    void push_back(Data* d);
    void push_front(Data *d);
    Data *pop_back();
    Data *pop_front();

    Node *getFirst() const;
    void setFirst(Node *value);

    Node *getLast() const;
    void setLast(Node *value);

    unsigned int getSize() const;
    void setSize(unsigned int value);

    void moveDown(Node *n);

    void RockSort();

private:
    Node* first;
    Node *last;
    unsigned int size;
};

ostream & operator<<(ostream & os, List const &  l);

#endif // LIST_H
