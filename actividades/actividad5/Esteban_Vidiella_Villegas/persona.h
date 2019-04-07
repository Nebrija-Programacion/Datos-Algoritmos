#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class persona
{
    friend std::ostream & operator << (std::ostream & os, persona p);
public:
    persona(string nombre, string apellido);
    string getNombre() const ;
    string getApellido() const;

private:
    string nombre;
    string apellido;
};

std::ostream & operator << (std::ostream & os, persona p);
bool operator == (persona const &a, persona const &b);

#endif // PERSONA_H
