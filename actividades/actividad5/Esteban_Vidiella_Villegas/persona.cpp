#include "persona.h"

persona::persona(string nombre, string apellido):
    nombre{nombre},
    apellido{apellido}
{

}

string persona::getNombre() const
{
    return nombre;
}

string persona::getApellido() const
{
    return apellido;
}

std::ostream &operator <<(std::ostream &os, persona p)
{
    os << p.getNombre() << " " << p.getApellido();
    return os;

}

bool operator ==(const persona &a, const persona &b)
{
    return(a.getNombre() == b.getNombre() && a.getApellido() == b.getApellido());
}
