#include "arbol_genealogico.h"

Arbol_Genealogico::Arbol_Genealogico(Persona * _persona): me{new Nodo(_persona)}
{

}

Nodo *Arbol_Genealogico::getMe() const
{
    return me;
}

void Arbol_Genealogico::setMe(Nodo *value)
{
    me = value;
}

void Arbol_Genealogico::runThrough() const
{
    me->setVisitedFalse();
    me->runThrough();
}

void Arbol_Genealogico::setVisitedFalse()
{
    me->setVisitedFalse();
}

Nodo *Arbol_Genealogico::search(string nombre, string apellido1, string apellido2) const
{
    me->setVisitedFalse();
    return me->search(nombre, apellido1, apellido2);
}
