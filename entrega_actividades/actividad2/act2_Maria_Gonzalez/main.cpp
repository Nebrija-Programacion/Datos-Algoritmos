#include <iostream>
#include "lista_enlazada.h"

using namespace std;

void menu(){

       cout<< endl;
       cout<<"********** LISTA ENLAZADA SIMPLE ***************  " << endl;
       cout<<" 1) FILTRAR NUMEROS MAYORES A UN ELEMENTO         " << endl;
       cout<<" 2) FILTRAR NUMEROS IGUALES A UN ELEMENTO         " << endl;
       cout<<" 3) FILTRAR NUMEROS MENORES A UN ELEMENTO         " << endl;
       cout<<" 4) FILTRAR NUMEROS DENTRO DE UN INTERVALO        " << endl;
       cout<<" 5) INTRODUCE UN ELEMENTO AL FINAL DE LA LISTA    " << endl;
       cout<<" 6) IMPRIME TODOS LOS ELEMENTOS DE LA LISTA       " << endl;
       cout<<" 0) SALIR                                         " << endl;
       cout<<"************************************************  " << endl;

       cout<< endl <<"Introduce una opcion: ";
}

int main()
{

    int opcion; // opcion del menu
    int respuesta {1}; //elemento que se introduce
    ListaEnlada * head = new ListaEnlada{0};


    do{
        menu();
        cin >> opcion;
        ListaEnlada *m;

        switch (opcion) {
            case 1: // Filtrar numeros mayores a un elemento

                while(respuesta){
                    int x;
                    cout << "Filtrar por elementos mayores a: ";
                    cin >> x;

                   m = head -> greater_than(x);
                   m -> print();

                    cout << "Si quieres probar con algun otro numero, pulse: " << endl;
                    cout <<"1) SI " << endl;
                    cout <<"0) NO " << endl;
                    cout << "Tu opcion es: ";
                    cin >> respuesta;
                }
             break;
             case 2:// Filtrar numeros iguales a un intervalo

                while(respuesta){
                    int x;
                    cout << "Filtrar por elementos iguales a: ";
                    cin >> respuesta;

                    m = head -> equal_to(x);

                    cout << "Si quieres probar con algun otro numero, pulse: " << endl;
                    cout <<"1) SI " << endl;
                    cout <<"0) NO " << endl;
                    cout << "Tu opcion es: ";
                    cin >> respuesta;
                }
            break;
            case 3: // Filtrar numeros menores a un elemento
                ListaEnlada *m;
                    while(respuesta){
                    int x;
                    cout << "Filtrar por elementos menores a: ";
                    cin >> respuesta;

                    m = head -> lesser_than(x);

                    cout << "Si quieres probar con algun otro numero, pulse: " << endl;
                    cout <<"1) SI " << endl;
                    cout <<"0) NO " << endl;
                    cout << "Tu opcion es: ";
                    cin >> respuesta;
                }
              break;
              case 4: //Filtrar numeros entre un intervalo

                    while(respuesta){
                    int i,j;
                    cout << "Introduce la primera coordenada: ";
                    cin >> i;
                    cout << "Introduce la segunda coordenada: ";
                    cin >> j;

                    m = head -> within_interval(i,j);

                    cout << "Si quieres probar con algun otro numero, pulse: " << endl;
                    cout <<"1) SI " << endl;
                    cout <<"0) NO " << endl;
                    cout << "Tu opcion es: ";
                    cin >> respuesta;
                }
               break;
               case 5: // Introduce un elemento al final de la lista
                    while(respuesta){
                        int x;
                        cout << "Introduce el numero que se coloca al final de la lista: ";
                        cin >> x;

                        head ->push_back(x);

                        cout << "Si quieres probar con algun otro numero, pulse: " << endl;
                        cout <<"1) SI " << endl;
                        cout <<"0) NO " << endl;
                        cout << "Tu opcion es: ";
                        cin >> respuesta;
                    }
                break;
                case 6: // Imprime todos los elementos de la lista
                    cout << "********** LISTA ENLAZADA SIMPLE ***************" << endl;
                    head ->print();
                break;
                default:
                    opcion = 0;
                break;

      }
    }while (opcion);

    return 0;
}

/* No entiendo porque solo me funcionana las opciones del
  menu la primera vez que pongo la opcion*/
