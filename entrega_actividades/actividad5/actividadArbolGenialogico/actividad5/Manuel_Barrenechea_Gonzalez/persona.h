#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Persona
{
    friend ostream &operator <<(ostream &os, Persona n);
    friend bool operator == (Persona const &a, Persona const &b);
private:
    string nombre;
    string apellido;
    string apellido2;
public:
    Persona(string nombre, string apellido, string apellido2);

    string getNombre() const;

    string getApellido() const;

    string getApellido2() const;
};

ostream &operator <<(ostream &os, Persona n);
bool operator == (Persona const &a, Persona const &b);

#endif // PERSONA_H
