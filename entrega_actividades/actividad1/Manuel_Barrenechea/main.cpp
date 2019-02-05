#include <iostream>
#include <listasimple.h>

using namespace std;

int main()
{
    unsigned short int respuesta{0};

    unsigned short int numero, posicion1, posicion2;

    ListaSimple * miListaSimple = new ListaSimple{0};

    cout << "                           -------------------------------------" << endl;
    cout << "                           TU LISTA ENLAZADA SIMPLE DE CONFIANZA" << endl;
    cout << "                           -------------------------------------" << endl;

    while(respuesta != 8){

        cout << endl << endl << "       ----------------------------------" << endl;
        cout << "       |El menu de tu lista de confianza|" << endl;
        cout << "       ----------------------------------" << endl;
        cout << "---------------------------------------------" << endl;
        cout << "1.Aniadir un elemento al final de la lista. " << endl;
        cout << "2.Aniadir un elemento al inicio de la lista. " << endl;
        cout << "3.Buscar puntero. " << endl;
        cout << "4.Buscar un indice. " << endl;
        cout << "5.Eliminar un elemento. " << endl;
        cout << "6.Mover un elemento a otra posicion. " << endl;
        cout << "7.Imprimir por pantalla los elementos. " << endl;
        cout << "8.Salir. " << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Que quieres hacer?: ";
        cin >> respuesta;

        while(respuesta != 1 && respuesta != 2 && respuesta != 3 && respuesta != 4 && respuesta != 5 && respuesta != 6 && respuesta != 7 && respuesta != 8){
            cout << "Respuesta invalida!!" << endl;
            cout << "---------------------------------------------" << endl;
            cout << "1.Aniadir un elemento al final de la lista. " << endl;
            cout << "2.Aniadir un elemento al inicio de la lista. " << endl;
            cout << "3.Buscar puntero. " << endl;
            cout << "4.Buscar un indice. " << endl;
            cout << "5.Eliminar un elemento. " << endl;
            cout << "6.Mover un elemento a otra posicion. " << endl;
            cout << "7.Imprimir por pantalla los elementos. " << endl;
            cout << "8.Salir. " << endl;
            cout << "----------------------------------------------" << endl;
            cout << "Que quieres hacer?: ";
            cin >> respuesta;
        }

        if(respuesta == 1){
            cout << endl << "Que numero quieres introducir en la lista: ";
            cin >> numero;

            miListaSimple->push_back(numero);
        }else if(respuesta == 2){
            cout << endl << "Que numero quieres introducir en la lista: ";
            cin >> numero;

            miListaSimple->push_front(numero);
        }else if(respuesta == 3){
            cout << "Introduce el indice con el que quieres buscar: ";
            cin >> numero;

            cout << "El puntero del indice buscado es: " << miListaSimple->atI(numero) << endl;
        }else if(respuesta == 4){
            cout << endl << "El indice de que elemento quieres buscar?: ";
            cin >> numero;

            cout << endl << "El indice del elemento buscado es: " << miListaSimple->search(numero) << endl;
        }else if(respuesta == 5){
            cout << endl << "Que elemento quieres eliminar?: ";
            cin >> numero;

            if(miListaSimple->erase(numero)){
                cout << endl << "Se ha eliminado el elemento indicado." << endl;
            }else{
                cout << endl << "No se ha encontrado el elemento indicado." << endl;
            }
        }else if(respuesta == 6){
            cout << "Introduce la posicion del elemento que quieres mover: ";
            cin >> posicion1;

            cout << "Introduce la posicion a la que quieras mover el elemento: ";
            cin >> posicion2;

            miListaSimple->move(posicion1,posicion2);
        }else if (respuesta == 7){
            cout << endl << "------------------------- " << endl;
            cout << "Tu lista de elementos es: " << endl;
            cout << "------------------------- " << endl;

            miListaSimple->print();
        }else if(respuesta == 8){
            return 1;
        }
    }
}
