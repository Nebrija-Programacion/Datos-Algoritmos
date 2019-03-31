#ifndef PERSONA_H
#define PERSONA_H

//clase padre persona, porque engloba a los alumnos de todas las careras y los años

#include <string>
using namespace std;
class persona
{
public:
    persona();
    //se utiliza void cuando el usuario tiene que introducir algun dato
    void Nombre();
    void DNI();
    void Carrera();
    void imprimirDatos();
private:
    /* se utiliza string cuando se trata de caracteres (no ppueden ir separa dos con espacion)
    son los datos que se van a pedir y se declaran en el private*/
    string nombre;
    string dni;
    string carrera;
};

#endif // PERSONA_H
