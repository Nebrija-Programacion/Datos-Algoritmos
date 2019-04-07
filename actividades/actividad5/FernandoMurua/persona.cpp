#include "persona.h"

Persona::Persona(string nombre, string apellidos):
    nombre{nombre},apellidos{apellidos}
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

string Persona::getApellidos() const
{
    return apellidos;
}

void Persona::setApellidos(const string &value)
{
    apellidos = value;
}


