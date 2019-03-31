#ifndef NODE_H
#define NODE_H
#include "persona.h"
#include <iostream>
#include <vector>
#include <array>
using namespace std;

class Node
{
public:
    Node(Persona *d);
    vector<Node *> getHijos() const;
    void setHijos(const vector<Node *> &value);
    array<Node *, 2> getPadres() const;
    void setPadres(const array<Node *, 2> &value);
    void runThrough();
    Persona *getData() const;
    void setData(Persona *value);

private:
Persona *data;
array<Node *,2> padres;
vector<Node *> hijos;
bool visitado;
};

#endif // NODE_H
