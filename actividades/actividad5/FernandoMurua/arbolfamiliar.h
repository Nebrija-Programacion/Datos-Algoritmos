#ifndef ARBOLFAMILIAR_H
#define ARBOLFAMILIAR_H
#include "node.h"
#include "persona.h"

class ArbolFamiliar
{
public:
    ArbolFamiliar();

    Node *getYo() const;
    void setYo(Node *value);
    Node *search(Persona *d);

private:
    Node *yo;
};

#endif // ARBOLFAMILIAR_H
