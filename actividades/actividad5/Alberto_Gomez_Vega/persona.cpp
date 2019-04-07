#include "persona.h"

Persona::Persona(string nombre, string apellido1, string apellido2):
    nombre{nombre},
    apellido1{apellido1},
    apellido2{apellido2}
{
}

string Persona::getNombre() const
{
    return nombre;
}

string Persona::getApellido1() const
{
    return apellido1;
}

string Persona::getApellido2() const
{
    return apellido2;
}
ostream &operator <<(ostream &os, Persona p)
{
    os << p.nombre << " " << p.apellido1 << " " << p.apellido2;
    return os;
}

bool operator == (Persona const &a, Persona const &b)
{
    return(a.nombre == b.nombre && a.apellido1 == b.apellido1 && a.apellido2 == b.apellido2);
}
