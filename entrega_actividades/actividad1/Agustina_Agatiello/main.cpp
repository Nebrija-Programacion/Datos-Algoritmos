#include "listaint.h"
#include <iostream>

using namespace std;

void showMenu(){
    cout << "--------------- Introduzca que desea hacer ---------------" << endl;
    cout << "(a) Añadir elemento al final de la lista. " << endl;
    cout << "(b) Añadir elemento al inicio de la lista." << endl;
    cout << "(c) Devolver puntero al elemento con índice i. " << endl;
    cout << "(d) Devolver índice de la primera coincidencia del elemento." << endl;
    cout << "(e) Eliminar elemento de índice i." << endl;
    cout << "(f) Imprimir elementos de la lista." << endl;
    cout << "(z) Salir." << endl;
    cout << "----------------------------------------------------------" << endl;
}

int main(){
    ListaInt * lista = new ListaInt{0} ;
    int aux;
    char option='x';

    cout << "      !!! BIENVENIDO A TU LISTA ENLAZADA SIMPLE !!!      " << endl << endl;

    while(option != 'z'){
        switch(option){
        case 'a':
            cout << "Introduzca un entero: ";
            cin >> aux;
            lista->push_back(aux);
            break;

        case 'b':
            cout << "Introduzca un entero: ";
            cin >> aux;
            lista->push_front(aux);
            break;

        case 'c':
            cout << "Indice con el que quiere buscar: ";
            cin >> aux;
            cout << "El puntero del indice es: ";
            lista->at(aux);
            break;

        case 'd':
            cout << "De que elemento quieres buscar el indice: ";
            cin >> aux;
            cout << "El indice del elemento es: ";
            lista->search(aux);
            break;

        case 'e':
            cout << "Que numero desea borrar: ";
            cin >> aux;
            if(lista->erase(aux)) cout << "Numero borrado." << endl;
            else cout << "No se ha encontrado el numero." << aux << endl;
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
