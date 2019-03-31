#include "data.h"
using namespace std;

Data::Data(string _nombre, string _apellido1, string _apellido2)
{
   nombre=_nombre;
   apellido1=_apellido1;
   apellido2=_apellido2;
}

string Data::getNombre() const
{
    return nombre;
}

void Data::setNombre(const string &value)
{
    nombre = value;
}

string Data::getApellido1() const
{
    return apellido1;
}

void Data::setApellido1(const string &value)
{
    apellido1 = value;
}

string Data::getApellido2() const
{
    return apellido2;
}

void Data::setApellido2(const string &value)
{
    apellido2 = value;
}

ostream &operator <<(ostream &os, Data p){
    os<<p.nombre<<"  "<<p.apellido1<<"  "<<p.apellido2;
    return os;
}
bool operator ==(Data const & d1, Data const & d2){
    return d1.getNombre() == d2.getNombre();
}
