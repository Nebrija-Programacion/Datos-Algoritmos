#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona
{
    friend ostream & operator << (ostream & os, Persona const & p);
    friend bool operator == (Persona const & p1, Persona const & p2);

public:
    Persona(string n);

    string getNombre() const;
    void setNombre(const string &value);

protected:
    string nombre;
};

ostream & operator << (ostream & os, Persona const & p);
bool operator == (Persona const & p1, Persona const & p2);

#endif // PERSONA_H
