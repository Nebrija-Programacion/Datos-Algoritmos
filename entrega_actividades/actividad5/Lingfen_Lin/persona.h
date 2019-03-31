#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona
{
    friend ostream & operator <<(ostream & os, Persona p);

public:
    Persona(string nombre, string apellido);

    string getNombre() const;
    string getApellido() const;

private:
    string nombre;
    string apellido;
};

ostream & operator << (ostream & os, Persona p);
bool operator == (Persona const & a, Persona const & b);

#endif // PERSONA_H
