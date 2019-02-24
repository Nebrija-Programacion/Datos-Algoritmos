#include <iostream>
#include "listaint.h"

using namespace std;

int main()
{
    int respuesta {0}, value {0}, respuesta1{0};
    ListaInt*lista = new ListaInt{};
    while (respuesta !=1 && respuesta !=2 && respuesta !=3 && respuesta !=4 && respuesta !=5 && respuesta !=6 && respuesta !=7 && respuesta !=8){
        cout << "                   ********************";
        cout << "\n                   *Que quieres hacer?*";
        cout << "\n                   ********************";
        cout << "\n\n1.Anadir un elemento al final de la lista.";
        cout << "\n2.Anadir un elemento al principio de la lista.";
        cout << "\n3.Buscar un elemento por su indice.";
        cout << "\n4.Buscar la referencia de un elemento.";
        cout << "\n5.Borrar un elemento.";
        cout << "\n6.Mover un elemento.";
        cout << "\n7.Mostrar todos los elementos.";
        cout << "\n8.Salir.\n";
        cin >> respuesta;

        if (respuesta == 1){
            respuesta = 0;
            cin >> value;
            lista->push_back(value);
        }
        if (respuesta == 2){
            respuesta = 0;
            cin >> value;
            lista->push_front(value);
        }
        if (respuesta == 3){
            respuesta = 0;
            cout << "Dime un indice y te dire su valor.\n";
            cin >> value;
            cout << "Su valor es: " << lista->at(value);
        }
        if (respuesta == 4){
            respuesta = 0;
            cout << "Dime un valor y te dire su referencia.\n";
            cin >> value;
            cout << "Su referencia es: " << lista->search(value);
        }
        if (respuesta == 5){
            respuesta = 0;
            cout << "Que numero quieres borrar" << endl;
            cin >> respuesta1;
            if (lista->erase(respuesta1)==true){
                cout << "Numero borrado" << endl;
            }else if (lista->erase(respuesta1)==false){
                cout << "No hay numero" << endl;
            }
        }
        if (respuesta == 6){
            respuesta = 0;
            int i,j;
            cout << "Tienes los siguientes elementos: \n";
            lista->printAll();
            cout << "Introduce el indice del elemento que quieres mover.\n";
            cin  >> i;
            cout << "Introduce el indice al que quieres moverlo moverlo.\n";
            cin  >> j;
            lista->move(i, j);
        }
        if (respuesta == 7){
            respuesta = 0;
            cout << "\nLa lista contiene: " << endl;
            lista->printAll();
        }
    }
    return 0;
}
