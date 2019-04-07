#include "persona.h"

Persona::Persona(string _nombre, string _apellido1, string _apellido2): nombre{_nombre}, apellido1{_apellido1}, apellido2{_apellido2}
{

}

void Persona::print() const
{
    cout << nombre << " " << apellido1 << " " << apellido2 << endl;
}

string Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(const string &value)
{
    nombre = value;
}

string Persona::getApellido1() const
{
    return apellido1;
}

void Persona::setApellido1(const string &value)
{
    apellido1 = value;
}

string Persona::getApellido2() const
{
    return apellido2;
}

void Persona::setApellido2(const string &value)
{
    apellido2 = value;
}
