#ifndef HUMANO_H
#define HUMANO_H

#include <iostream>
#include <vector>
#include <array>

using namespace std;

class Humano
{
public:
    Humano(string _nombre, string _apellido_1, string _apellido_2);

    void print();

    string getNombre() const;

    string getApellido_1() const;

    string getApellido_2() const;

private:
    string nombre, apellido_1, apellido_2;
};

#endif // HUMANO_H
