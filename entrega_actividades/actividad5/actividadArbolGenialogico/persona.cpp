#include "persona.h"

string Persona::getNombre() const
{
    return nombre;
}

string Persona::getApellido() const
{
    return apellido;
}

string Persona::getApellido2() const
{
    return apellido2;
}

Persona::Persona(string nombre, string apellido, string apellido2):
    nombre{nombre},
    apellido{apellido},
    apellido2{apellido2}
{

}

ostream &operator <<(ostream &os, Persona n)
{
    os << n.nombre << " " << n.apellido << " " << n.apellido2 << endl;
    return os;
}

bool operator ==(const Persona &a, const Persona &b)
{
    return (a.nombre == b.nombre && a.apellido == b.apellido);
}
