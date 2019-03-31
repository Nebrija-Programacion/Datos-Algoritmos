#include "gradoini2.h"
#include <iostream>

using namespace std;

gradoINI2::gradoINI2()
{

}

void gradoINI2::establecerNotas()
{
    cout << "Introduce la nota Programacion Avanzada: ";
    cin >> ni21;
    cout << "Introduce la nota Estadistica: ";
    cin >> ni22;
    cout << "Introduce la nota Circuitos: ";
    cin >> ni23;

}

float gradoINI2::mostrar1i()
{
    media = (ni21 + ni22 +ni23)/3;
    cout << "Tu media es: " << media;
}

void gradoINI2::imprimirDatos()
{
cout << "MEDIA: " << media << endl << endl;
}
