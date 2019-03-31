#ifndef ARBOLGEN_H
#define ARBOLGEN_H
#include "node.h"



class ArbolGen
{
public:
    ArbolGen();

    Node *getYo() const;
    void setYo(Node *value);

    Node* search(Persona p);

private:
    Node* yo;
};

#endif // ARBOLGEN_H
