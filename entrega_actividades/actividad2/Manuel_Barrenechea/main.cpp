#include <iostream>
#include "listasimple.h"

using namespace std;

void showMenu(){
    cout << "------------------------ " << endl;
    cout << "A lo loco con las listas " << endl;
    cout << "------------------------ " << endl;
    cout << "------------------------------------------------ " << endl;
    cout << "1. Aniadir un elemento a la lista. " << endl;
    cout << "2. Filtrar por numeros mayores de un valor. " << endl;
    cout << "3. Filtrar por numeros coincidentes. "<< endl;
    cout << "4. Filtrar por numeros menores de un valor. " << endl;
    cout << "5. Filtrar por numeros dentro de un intervalo. " << endl;
    cout << "6. Imprimir por pantalla la lista. " << endl;
    cout << "7. Salir. " << endl;
    cout << "------------------------------------------------ " << endl;
    cout << "Que quieres hacer: ";
}

int main()
{
    try{
        int respuesta{0}, numero, numero2;

        string nombre;

        ListaSimple *miListaSimple = new ListaSimple{0, "Manuel"};

        while(respuesta != 7){

            switch(respuesta){
            case 1:
                cout << endl << "Introduce el numero que quieres aniadir a la lista: ";
                cin >> numero;

                cout << "Introduce el nombre que quieres aniadir a la lista: ";
                cin >> nombre; cout << endl;

                miListaSimple->push_back(numero, nombre);

                break;

            case 2:
                cout << endl << "Introduce el numero desde el que quieres filtrar nuemeros por encima de el: ";
                cin >> numero;

                miListaSimple->greater_than(numero);

                break;

            case 3:
                cout << endl << "Introduce el numero por el que quieras filtrar numeros coincidentes: ";
                cin >> numero;

                miListaSimple->equal_to(numero);

                break;

            case 4:
                cout << endl << "Introduce el numero desde el que quieras filtrar numeros por debajo de el: ";
                cin >> numero;

                miListaSimple->lesser_than(numero);

                break;

            case 5:
                cout << endl << "Introduce el primer numero desde el que quieras filtrar: ";
                cin >> numero;

                cout << "Introduce el segundo numero desde el que quieras filtrar: ";
                cin >> numero2;

                while(numero > numero2){
                    cout << "El primer numero ha de ser menor que el segundo introducido. " << endl;

                    cout << endl << "Introduce el primer numero desde el que quieras filtrar: ";
                    cin >> numero;

                    cout << "Introduce el segundo numero desde el que quieras filtrar: ";
                    cin >> numero2;
                }

                miListaSimple->within_interval(numero, numero2);

                break;

            case 6:
                cout << endl << "------------------" << endl;
                cout << "Tus elementos son: " << endl;
                cout << "------------------ " << endl;

                miListaSimple->print();
                cout << endl;
                break;
            }

            showMenu();
            cin >> respuesta;
        }
    }catch(string e){
        cout << e << endl;
        return 1;
    }
    return 0;
}
