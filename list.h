#ifndef LIST_H
#define LIST_H
#include "data.h"
#include "node.h"

class List{
public:
    List(){}

    Node *getFirst() const;
    void setFirst(Node *value);

    Node *getLast() const;
    void setLast(Node *value);

    void push_back(Data *da);
    void push_front(Data *da);
    Data *pop_back();
    Data *pop_front();

    void moveDown(Node *no);
    void stone();

private:
    Node *first;
    Node *last;
};

#endif // LIST_H
