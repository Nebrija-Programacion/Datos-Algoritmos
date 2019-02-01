//
//  main.cpp
//  Listas_Simples_Enlazadas
//
//  Created by Rocio Ruiz Ruiz on 27/1/19.
//  Copyright © 2019 Rocio Ruiz Ruiz. All rights reserved.
//

#include <iostream>
#include <Listasimple.h>

using namespace std;
int menu(){
    int option;
    cout << "----------------------------------------"  << endl;
    cout << "1: Anadir al final "                       << endl;
    cout << "2: Añadir al principio "                   << endl;
    cout << "3: Buscar por indice (devuelve puntero) "  << endl;
    cout << "4: Buscar por elemento (devuelve indice)"  << endl;
    cout << "5: Eliminar por posicion "                 << endl;
    cout << "6: Mover "                                 << endl;
    cout << "7: Imprimir lista "                        << endl;
    cout << "0: SALIR "                                 << endl;
    cout << "----------------------------------------"  << endl;
    cin  >> option;

    return option;
}
int main() {

    int option;
    ListaSimple * head = new ListaSimple{0};

    do{
        option = menu();
        switch (option) {
            case 1:
            {
                bool b{true};
                while(b){
                    int a;
                    cout << "Introduzca el numero que desee anadir. " << endl;
                    cin  >> a;
                    head->push_back(a);
                    cout << "¿Desea anadir algun otro? *Si: pulse 1.  *No: pulse 0. " << endl;
                    cin  >> b;
                }
                break;
            }
            case 2:
            {
                bool b{true};
                while(b){
                    int a;
                    cout << "Introduzca el numero que desee anadir. " << endl;
                    cin  >> a;
                    head->push_front(a);
                    cout << "¿Desea anadir algun otro? En caso negativo pulse 0. " << endl;
                    cin  >> b;
                }
                break;
            }
            case 3:
            {
                bool b{true};
                while(b){
                    int a;
                    cout << "Introduzca la posicion(indice) que desee buscar. " << endl;
                    cin  >> a;
                    cout << head->at(a) << endl;
                    cout << "¿Desea buscar algun otro? En caso negativo pulse 0. " << endl;
                    cin  >> b;
                }
                break;
            }
            case 4:
            {
                bool b{true};
                while(b){
                    int a;
                    cout << "Introduzca el elemento del que desee saber su posicion. " << endl;
                    cin  >> a;
                    cout << head->search(a) << endl;
                    cout << "¿Desea buscar algun otro? En caso negativo pulse 0. " << endl;
                    cin  >> b;
                }
                break;
            }
            case 5:
            {
                bool b{true};
                while(b){
                    int a;
                    cout << "Introduzca la posicion del elemento que desea borrar. " << endl;
                    cin  >> a;
                    head->erase(a);
                    cout << "¿Desea borrar algun otro? En caso negativo pulse 0. " << endl;
                    cin  >> b;
                }
                break;
            }
            case 6:
            {
                bool b{true};
                while(b){
                    int i,j;
                    cout << "Introduzca la posicion del elemento que desea mover. " << endl;
                    cin  >> i;
                    cout << "Introduzca la posicion a la que desea moverlo. " << endl;
                    cin  >> j;
                    head->move(i, j);
                    cout << "¿Desea mover algun otro? En caso negativo pulse 0. " << endl;
                    cin  >> b;
                }
                break;
            }
            case 7:
                cout << "-------------------SU LISTA----------------" << endl;
                head ->print();
                break;
            default:
                option = 0;
                break;
        }
    }while (option);
    return 0;
}
