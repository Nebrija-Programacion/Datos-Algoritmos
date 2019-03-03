#ifndef NODE_H
#define NODE_H

#include "data.h"

class Node
{
public:
    Node(Data* d);
    ~Node();
    Data *getData() const;
    void setData(Data *value);

    Node *getNext() const;
    void setNext(Node *value);

    Node *getPrev() const;
    void setPrev(Node *value);

    void print() const;

    Node* search(int value);
    Node* searchb(int value, Node* Frst, Node* Lst);

private:
    Data *data;
    Node* next;
    Node* prev;
};

bool operator<(Node const & n1, Node const & n2);
bool operator> (Node const & n1, Node const & n2);
bool operator== (Node const & n1, Node const & n2);
bool operator<= (Node const & n1, Node const & n2);
bool operator>= (Node const & n1, Node const & n2);
bool operator!= (Node const & n1, Node const & n2);

#endif // NODE_H
