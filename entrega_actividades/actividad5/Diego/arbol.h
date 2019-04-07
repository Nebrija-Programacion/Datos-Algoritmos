#ifndef ARBOL_H
#define ARBOL_H

#include "node.h"

class Arbol
{
public:
    Arbol();
    ~Arbol();

    void print();

    void search(string _name, string _apellido1, string apellido2);

    void reset();

    Node *getYo() const;
    void setYo(Node *value);

private:
    Node *yo;
};

#endif // ARBOL_H
