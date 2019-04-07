#include "arbolgen.h"

ArbolGen::ArbolGen()
{}

Node *ArbolGen::getYo() const
{
    return yo;
}

void ArbolGen::setYo(Node * value)
{
    yo = value;
}

Node *ArbolGen::search(Persona p)
{
    if(yo->getPersona() == p) return yo;
    yo->search(p);
}
