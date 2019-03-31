#include "gradoini1.h"
#include "persona.h"
#include <iostream>
#include <math.h>

using namespace std;

gradoINI1::gradoINI1()
{

}

void gradoINI1::establecerNotas()
{
    cout << "Introduce la nota Programacion: ";
    cin >> ni11;
    cout << "Introduce la nota Fisica: ";
    cin >> ni12;
    cout << "Introduce la nota Matematicas: ";
    cin >> ni13;
    cout << "Introduce la nota Empresas: ";
    cin >> ni14;

}

float gradoINI1::mostrar1i()
{
    media = (ni11 + ni12 +ni13 + ni14)/4;
    cout << "Tu media es: " << media;
}

void gradoINI1::imprimirDatos()
{
cout << "MEDIA: " << media << endl << endl;

}



