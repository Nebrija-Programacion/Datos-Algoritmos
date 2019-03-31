#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;
class Persona
{
public:
    Persona(string nombre, string apellidos);

    string getNombre() const;
    void setNombre(const string &value);

    string getApellidos() const;
    void setApellidos(const string &value);

private:
    string nombre,apellidos;
};
ostream &operator <<(ostream &os, Persona &a);
#endif // PERSONA_H
