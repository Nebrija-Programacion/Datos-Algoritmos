#ifndef DATA_H
#define DATA_H
#include <string>
#include <array>
using namespace std;

class Data
{
public:
    Data(string nombre, string _apellido1, string _apellido2);

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
ostream & operator <<(ostream & os, Data p);
bool operator ==(Data const & d1, Data const & d2);
#endif // DATA_H
