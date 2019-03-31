#include "gradomod2.h"
#include <iostream>

using namespace std;

gradoMOD2::gradoMOD2()
{

}

void gradoMOD2::establecerNotas()
{
    cout << "Introduce la nota Moda e Influencers: ";
    cin >> nm21;
    cout << "Introduce la nota Moda Clasica: ";
    cin >> nm22;
    cout << "Introduce la nota Moda Reciclable: ";
    cin >> nm23;
}

float gradoMOD2::mostrar1i()
{
    media = (nm21 + nm22 +nm23)/3 + 1;
    cout << "Tu media es: " << media;
}

void gradoMOD2::imprimirDatos()
{
    cout << "MEDIA: " << media << endl << endl;
}
