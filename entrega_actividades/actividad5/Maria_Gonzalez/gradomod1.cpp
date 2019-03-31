#include "gradomod1.h"
#include <iostream>

using namespace std;

gradoMOD1::gradoMOD1()
{

}

void gradoMOD1::establecerNotas()
{
    cout << "Introduce la nota Disenios y Patrones: ";
    cin >> nm11;
    cout << "Introduce la nota Corte y Confeccion: ";
    cin >> nm12;
    cout << "Introduce la nota Tendencias: ";
    cin >> nm13;

}

float gradoMOD1::mostrar1i()
{
    media = (nm11 + nm12 +nm13)/3 + 1;
    cout << "Tu media es: " << media << endl;
}

void gradoMOD1::imprimirDatos()
{
cout << "MEDIA: " << media << endl << endl;
}
