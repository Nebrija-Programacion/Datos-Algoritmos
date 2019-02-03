#include <iostream>
#include "ListaEnlazada.h"

using namespace std;
void menu(){

       cout<< endl;
       cout<<"********** LISTA ENLAZADA SIMPLE ***************  " << endl;
       cout<<" 1) INTRTODUCE UN ELEMENTO AL FINAL DE LA LISTA   " << endl;
       cout<<" 2) INTRODUCE UN ELEMENTO AL INICIO DE LA LISTA   " << endl;
       cout<<" 3) BUSCA UN ELEMENTO DENTRO DE LA LISTA           " << endl;
       cout<<" 4) ELIMINA UN ELEMENTO DE LA LISTA               " << endl;
       cout<<" 5) CAMBIA LA POSICION DE UN ELEMENTO DE LA LISTA " << endl;
       cout<<" 6) IMPRIME LA LISTA COMPLETA                     " << endl;
       cout<<" 7) BUSCA UN ELEMENTO POR EL INDICE               " << endl;
       cout<<" 0) SALIR                                         " << endl;
       cout<<"************************************************  " << endl;

       cout<< endl <<"Introduce una opcion: ";
}

int main()
{
    int opcion; // opcion del menu
    int dato; //elemento que se introduce
    int a {1};
    Lista * head = new Lista{0};
    do{
        menu();
        cin >> opcion;


        switch (opcion){
            case 1: //Añade un elemento al final de la lista

                while (a){

                cout << "Introduce un numero: " << endl;
                cin >> dato;
                head -> push_back(dato);

                cout <<"Si quieres introducir otro numero" << endl;
                cout <<"1) SI " << endl;
                cout <<"0) NO " <<endl << endl;

                cout <<"-> ";
                cin >> a;
                }
            break;

            case 2: // Añade un elemnto al inicio de la lista

                while (a){
                cout << "Introduce un numero: " << endl;
                cin >> dato;
                head -> push_front(dato);

                cout <<"Si quieres introducir otro numero" << endl;
                cout <<"1) SI " << endl;
                cout <<"0) NO " <<endl << endl;

                cout <<"-> ";
                cin >> a;
                }
            break;

            case 3://busca un elemnto dentro de la lista

                  while(a){
                  cout << "Introduce el elemento que quieres buscar: ";
                  cin  >> dato;
                  cout << "Esta en la posicion: " << head->search(dato) << endl;
                  cout <<"Si quieres introducir otro numero" << endl;
                  cout <<"1) SI " << endl;
                  cout <<"0) NO " <<endl << endl;

                  cout <<"-> ";
                  cin >> a;
                  }
            break;

            case 4: //elimina un elemento de la lista

                while(a){
                cout << "En que posicion quieres borrar el numero?: ";
                cin  >> dato;
                head->erase(dato);
                cout <<"Si quieres introducir otro numero" << endl;
                cout <<"1) SI " << endl;
                cout <<"0) NO " <<endl << endl;

                cout <<"-> ";
                cin >> a;
                }
            break;

            case 5:// cambia la posicion de un elemento de la lista

                while(a){
                int i,j;
                cout << "En que posicion quieres mover el numero?(posicion i): ";
                cin  >> i;
                cout << "En que posicion quieres mover el numero?(posicion j): " << endl;
                cin  >> j;
                head->move(i, j);

                cout <<"Si quieres introducir otro numero" << endl;
                cout <<"1) SI " << endl;
                cout <<"0) NO " <<endl << endl;

                cout <<"-> ";
                cin >> a;
                }
            break;

            case 6://imprime la lista completa

                 cout << "La lista completa es: " << endl;
                 head->printAll();
            break;

            case 7://busca un elemnto a través del induce de la lista

                    while(a){
                    cout << "Introduce el elemento que quieres buscar por el indice: ";
                    cin  >> dato;
                    cout << "Esta en la posición del indice: " << head->at(dato) << endl;
                    cout <<"Si quieres introducir otro numero" << endl;
                    cout <<"1) SI " << endl;
                    cout <<"0) NO " <<endl << endl;

                    cout <<"-> ";
                    cin >> a;
                    }

            break;

            default:// se sale del programa
                opcion = 0;
            break;
            }


    }while (opcion);
    return 0;
}

