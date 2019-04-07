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

bool operator == (const Persona &a, const Persona &b)
{
    return (a.getNombre() == b.getApellido2() && a.getApellido1() == b.getApellido1() || a.getNombre() == b.getNombre() && a.getApellido2() == b.getApellido2());
}
