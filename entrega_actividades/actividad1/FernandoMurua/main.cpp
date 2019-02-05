#include <iostream>
#include "listaint.h"

using namespace std;
void menu(){
    cout << "Escriba a continuacion la letra de la opcion que desea hacer: "<< endl;
    cout << "(a) Anadir un elemento al final de la lista. " << endl;
    cout << "(b) Anadir un elemento al principio de la lista. " << endl;
    cout << "(c) Buscar un elemento segun su indice. " << endl;
    cout << "(d) Buscar un elemento segun su entero. " << endl;
    cout << "(e) Eliminar un elemento segun su entero. " << endl;
    cout << "(f) Imprime por pantalla todos los elementos. " << endl;
    cout << "(z) Sal del programa. " << endl;
}

int main()
{
ListaInt *Lista=new ListaInt{0};
string aux;
menu();
while(aux!="z"){
    cout << "Introduzca su opcion a continuacion: " ;
    cin >> aux;
    if(aux=="a"){
        int auxi;
        cout << "Introduzca el numero que desea anadir(entero): ";
        cin >> auxi;
        Lista->push_back(auxi);
    }
    if(aux=="b"){
        int auxi;
         cout << "Introduzca el numero que desea anadir(entero) al principio: ";
         cin >> auxi;
         Lista->push_front(auxi);
    }
    if(aux=="c"){
        int auxi;
        cout << "Introduzca el indice del elemento que deseas buscar: ";
        cin >> auxi;
        ListaInt *aux = nullptr;
        aux=Lista->search_at(auxi);
        if(aux==nullptr){cout << "No se ha encontrado ningun elemento"<< endl;}
        else{ cout << "Se ha encontrado el elemento" << endl;}
     }
    if(aux=="d"){
        int auxi;
        cout << "Introduzca el numero del elemento que deseas buscar: ";
        cin >> auxi;
        ListaInt *aux = nullptr;
        aux=Lista->search(auxi);
        if(aux==nullptr)cout << "No se ha encontrado ningun elemento"<< endl;
        else cout << "Se ha encontrado el elemento" << endl;
    }
    if(aux=="e"){
        int auxi;
        cout << "Introduzca el numero del elemento que deseas eliminar: ";
        cin >> auxi;
        Lista->erase(auxi);
    }
    if(aux=="f"){
        Lista->print();
    }
}
cout << "Saliendo del programa " << endl;
return 0;
}
