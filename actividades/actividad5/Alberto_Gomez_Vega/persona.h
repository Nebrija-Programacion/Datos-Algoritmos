#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Persona
{
    friend ostream & operator << (ostream & os, Persona n);
    friend bool operator == (Persona const &a, Persona const &b);

public:
    Persona(string nombre, string apellido1, string apellido2);

    string getNombre() const;

    string getApellido1() const;

    string getApellido2() const;

private:
    string nombre;
    string apellido1;
    string apellido2;
};

ostream & operator << (ostream & os, Persona n);
bool operator == (Persona const &a, Persona const &b);

#endif // PERSONA_H
