#include "persona.h"
#include <iostream>

using namespace std;

persona::persona()
{

}

void persona::Nombre()
{
    cout << "Introduce tu nombre: "; cin >> nombre;
}

void persona::DNI()
{
    cout << "Introduce tu DNI: "; cin >> dni;
}

void persona::Carrera()
{
    cout << "Introduce el nombre de tu carrera separado con - : "; cin >> carrera;
}


void persona::imprimirDatos()
{
    cout << endl<< endl;
    cout << "********DATOS DEL ALUMNO*********" <<endl;
    cout << "CARRERA: " << carrera << endl;
    cout << "NOMBRE: " << nombre << endl;
    cout << "DNI: " << dni << endl;


}
