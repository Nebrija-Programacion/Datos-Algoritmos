#ifndef ARBOL_GENEALOGICO_H
#define ARBOL_GENEALOGICO_H
#include "nodo.h"

class Arbol_Genealogico
{
public:
    Arbol_Genealogico(Persona *);

    Nodo *getMe() const;
    void setMe(Nodo *value);
    void runThrough() const;
    void setVisitedFalse();
    Nodo* search(string, string, string) const;

private:
    Nodo * me;

};

#endif // ARBOL_GENEALOGICO_H
