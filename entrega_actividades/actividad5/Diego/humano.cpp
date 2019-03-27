#include "humano.h"

Humano::Humano(string _nombre, string _apellido_1, string _apellido_2):
    nombre{_nombre},
    apellido_1{_apellido_1},
    apellido_2{_apellido_2}
{

}

void Humano::print()
{
    cout << nombre << " " << apellido_1 << " " << apellido_2 << endl;
}

string Humano::getNombre() const
{
    return nombre;
}

string Humano::getApellido_1() const
{
    return apellido_1;
}

string Humano::getApellido_2() const
{
    return apellido_2;
}
