#ifndef ESTRUCTURA_H
#define ESTRUCTURA_H

#include "data.h"
#include "node.h"
#include <iostream>
using namespace std;
class Estructura
{
public:
    Estructura();
    Node *getFirstT() const;
    void setFirstT(Node *value);

    Node *getLastT() const;
    void setLastT(Node *value);

    Node *getFirstB() const;
    void setFirstB(Node *value);

    Node *getLastB() const;
    void setLastB(Node *value);
    void push(Data *d);
    void print();

private:
    Node *FirstT;
    Node *LastT;
    Node *FirstB;
    Node *LastB;
};

#endif // ESTRUCTURA_H
