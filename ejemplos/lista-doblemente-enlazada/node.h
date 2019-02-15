#ifndef NODE_H
#define NODE_H

#include "data.h"

class Node{
public:
    Node(Data* d = new Data{0});
    void push_back(Data* d);
    void insert_after(Data* d);
    Node *getNext() const;
    void setNext(Node *value);

    Node *getPrev() const;
    void setPrev(Node *value);

    Data *getData() const;
    void setData(Data *value);

private:
    Node* next;
    Node* prev;
    Data* data;
};
#endif // NODE_H
