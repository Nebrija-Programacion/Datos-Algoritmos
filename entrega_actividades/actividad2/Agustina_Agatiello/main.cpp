#include "listaint.h"
#include <iostream>

using namespace std;

void showMenu(){
    cout << "--------------- Introduzca que desea hacer ---------------" << endl;
    cout << "(a) Agregar elemento al final de la lista." << endl;
    cout << "(b) Filtrar por numeros mayores de valor introducido. " << endl;
    cout << "(c) Filtrar por numeros coincidentes." << endl;
    cout << "(d) Filtrar por numeros menores de valor introducido. " << endl;
    cout << "(e) Filtrar por numeros dentro de un intervalo." << endl;
    cout << "(f) Imprimir elementos de la lista." << endl;
    cout << "(z) Salir." << endl;
    cout << "----------------------------------------------------------" << endl;
}

int main(){
    ListaInt * lista = new ListaInt{0, "Name"} ;
    int value, aux1, aux2;
    string name;

    char option='x';

    cout << "      !!! BIENVENIDO A TU LISTA ENLAZADA SIMPLE !!!      " << endl << endl;

    while(option != 'z'){
        switch(option){
        case 'a':
            cout << "Introduzca un entero: ";
            cin >> value;
            cout << "Introduzca un nombre: ";
            cin >> name;
            lista->push_back(value, name);
            break;

        case 'b':
            cout << "Introduzca un entero para filtrar mayores: ";
            cin >> value;
            lista->greater_than(value);
            break;

        case 'c':
            cout << "Introduzca un entero para filtrar coincidentes: ";
            cin >> value;
            lista->equal_to(value);
            break;

        case 'd':
            cout << "Introduzca un entero para filtrar menores: ";
            cin >> value;
            lista->lesser_than(value);
            break;

        case 'e':
            cout << "Introduzca el primer entero para filtrar entre intervalo: ";
            cin >> aux1;
            cout << "Introduzca el segundo numero: ";
            cin >> aux2;
            lista->within_interval(aux1, aux2);
            break;

        case 'f':
            cout << "Lista: " << endl;
            lista->printAll();
            break;
        }

        showMenu();
        cin >> option;

    }

    cout << "Hasta pronto!" << endl;
    return 0;
}
