#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

class Persona
{
public:
    Persona(string,string,string);
    void print() const;

    string getNombre() const;
    void setNombre(const string &value);

    string getApellido1() const;
    void setApellido1(const string &value);

    string getApellido2() const;
    void setApellido2(const string &value);

private:
    string nombre;
    string apellido1;
    string apellido2;
};

#endif // PERSONA_H
