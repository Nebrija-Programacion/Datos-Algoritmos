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

    void moveUp(Node *n);

    void bubbleSort();

    Node* search(int value);
    Node* searchb(int value, Node* Frst, Node* Lst, int sizee);
    Node* getMiddle(int size, Node *Frst);

private:
    Node* first;
    Node *last;
    unsigned int size;
};

ostream & operator<<(ostream & os, List const &  l);

#endif // LIST_H
