#include "persona.h"

Persona::Persona(string n):
    nombre{n}
{

}

string Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(const string &value)
{
    nombre = value;
}

ostream &operator <<(ostream &os, const Persona &p)
{
    os << p.nombre;
    return os;
}

bool operator ==(const Persona &p1, const Persona &p2)
{
    return (p1.nombre == p2.nombre);
}
