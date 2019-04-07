#include <iostream>
#include "listasimple.h"
#include "listasimple.cpp"

using namespace std;


int main(int argc, char *argv[])
{
    int option, valor1, valor2;
    string texto;
    ListaSimple* miLista;
    miLista = new ListaSimple();

    do{
        cout << "Inserte numero para seleccionar la opcion deseada: " <<endl;
        cout << "1 --> Añade un elemento al final de la lista." <<endl;
        cout << "2 --> Imprime todos los elementos de la lista." << endl;
        cout << "3 --> Imprime los elementos de la lista cuyos valores sean mayor al numero especificado." <<endl;
        cout << "4 --> Imprime los elementos de la lista cuyos valores sean menor al numero especificado." <<endl;
        cout << "5 --> Imprime los elementos de la lista cuyos valores sean igual al numero especificado." <<endl;
        cout << "6 --> Imprime los elementos de la lista cuyos valores esten dentro del intervalo especificado." <<endl;
        cout << "7 --> Salir." <<endl;
        cout << "Opcion insertada: ";
        cin >> option;
        cout <<endl;

        switch(option){
            case 1:
                cout << "Inserte el valor numerico del nuevo elemento: ";
                cin >> valor1;
                cout << "Inserte la cadena de texto del nuevo elemento: ";
                cin >> texto;
                miLista->push_back(valor1,texto);
                cout << endl;
                break;

            case 2:
                miLista->print();
                break;

            case 3:
                cout << "Inserte el valor numerico con el que desea filtrar la lista: ";
                cin >> valor1;
                miLista->greater_than(valor1)->print();
                break;
            case 4:
                cout << "Inserte el valor numerico con el que desea filtrar la lista: ";
                cin >> valor1;
                miLista->lesser_than(valor1)->print();
                break;
            case 5:
                cout << "Inserte el valor numerico con el que desea filtrar la lista: ";
                cin >> valor1;
                miLista->equal_to(valor1)->print();
                break;
            case 6:
                cout << "Inserte el primer valor numerico del intervalo con el que desea filtrar la lista: ";
                cin >> valor1;
                cout <<endl;
                cout << "Inserte el segundo valor numerico del intervalo con el que desea filtrar la lista: ";
                cin >> valor2;
                miLista->within_interval(valor1,valor2)->print();
                break;
            case 7:
                cout << "Hasta pronto!" <<endl;
                break;
        }
    }while(option != 7);
}

ListaSimple * ListaSimple::within_interval(int value1, int value2){
    ListaSimple* iterator = this;
    ListaSimple* listado = new ListaSimple();
    int i = 0;
    int mayor,menor;

    if(value1 > value2){
        mayor = value1;
        menor = value2;
    }else {
        mayor = value2;
        menor = value1;
    }

    while(iterator->getNext()){
        iterator = iterator->getNext();

        if(iterator->getData() < mayor && iterator->getData() > menor){
            listado->push_back(iterator->getData(),iterator->getCadena());
        }
        i++;
    }
    return listado;
}

ListaSimple* ListaSimple::equal_to(int value){
    ListaSimple* iterator = this;
    ListaSimple* listado = new ListaSimple();
    int i = 0;

    while(iterator->getNext()){
        iterator = iterator->getNext();

        if(iterator->getData() == value){
            listado->push_back(iterator->getData(),iterator->getCadena());
        }
        i++;
    }
    return listado;
}

ListaSimple* ListaSimple::lesser_than(int value){
    ListaSimple* iterator = this;
    ListaSimple* listado = new ListaSimple();
    int i = 0;

    while(iterator->getNext()){
        iterator = iterator->getNext();

        if(iterator->getData() < value){
            listado->push_back(iterator->getData(),iterator->getCadena());
        }
        i++;
    }
    return listado;
}

ListaSimple* ListaSimple::greater_than(int value){
    ListaSimple* iterator = this;
    ListaSimple* listado = new ListaSimple();
    int i = 0;

    while(iterator->getNext()){
        iterator = iterator->getNext();

        if(iterator->getData() > value){
            listado->push_back(iterator->getData(),iterator->getCadena());
        }
        i++;
    }
    return listado;
}
