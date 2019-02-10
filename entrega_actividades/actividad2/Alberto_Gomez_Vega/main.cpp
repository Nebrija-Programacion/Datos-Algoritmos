#include "listaint.h"
#include <iostream>

using namespace std;

void showMenu(){
    cout << "------------------------------\n";
    cout << "Introduzca que desea hacer: \n";
    cout << "(a) Anadir un elemento a la lista. \n";
    cout << "(b) Imprimir la lista.\n";
    cout << "(c) Filtrar la lista.\n";
    cout << "(d) Salir.\n";
    cout << "------------------------------\n";
}
void showMenu2(){
    cout << "------------------------------\n";
    cout << "Que filtro quieres aplicar: \n";
    cout << "(a) Filtrar por numeros mayores de un valor.\n";
    cout << "(b) Filtrar por numeros coincidentes.\n";
    cout << "(c) Filtrar por numeros menores que un valor.\n";
    cout << "(d) Filtrar por numeros dentro de un intervalo.\n";
    cout << "(e) Salir.\n";
    cout << "------------------------------\n";
}
int main()
{
    try{
        ListaInt lista;
        int respuesta1, respuesta2;
        char option='z';
        char option2='z';
        while(option != 'd'){
            switch(option){
            case 'a':
                cout << "Introduce el valor deseado a la lista: \n";
                cin >> respuesta1;
                lista.push_back(respuesta1);
                break;
            case 'b':
                cout << "Los elementos de la lista son: \n";
                lista.printAll();
                break;
            case 'c':
                while(option2 != 'e'){
                    showMenu2();
                    cin >> option2;
                    switch(option2){
                    case 'a':
                        cout << "Introduce un valor y te dare los valores mayores de la lista.\n";
                        cin >> respuesta1;
                        lista.greather_than(respuesta1);
                        break;
                    case 'b':
                        cout << "Introduce el valor para encontrar coincidencias: \n";
                        cin >> respuesta1;
                        lista.equal_to(respuesta1);
                        break;
                    case 'c':
                        cout << "Introduce el valor y te dare los resultados menores: \n";
                        cin >> respuesta1;
                        lista.lesser_than(respuesta1);
                        break;
                    case 'd':
                        cout << "Introduce dos valores para filtrar la lista: \n";
                        cout << "El primer valor es: \n";
                        cin >> respuesta1;
                        cout << "El segundo valor es: \n";
                        cin >> respuesta2;
                        lista.within_interval(respuesta1,respuesta2);
                        break;
                    }
                }
            }
            showMenu();
            cin >> option;
        }
        cout << "Hasta luego! \n";
        return 0;
    }catch(string e){
        cout << e << endl;
        return -1;
    }
}
