#include "persona.h"

Persona::Persona(string nombre, string apellido):
    nombre{nombre},
    apellido{apellido}
{}

string Persona::getNombre() const
{
    return nombre;
}

string Persona::getApellido() const
{
    return apellido;
}

ostream &operator <<(ostream &os, Persona p)
{
    os << p.nombre << " " << p.apellido;
    return os;
}

bool operator ==(const Persona &a, const Persona &b)
{
    return(a.getNombre() == b.getNombre() && a.getApellido() == b.getApellido());
}
