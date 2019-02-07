#include <iostream>
#include "listasimple.h"

using namespace std;

ListaSimple::ListaSimple(int _data, string _cadena)
{
    data = _data;
    cadena = _cadena;
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

void ListaSimple::print(){
    ListaSimple* iterador = this;
    int i = 0;
    cout << endl;
    while(iterador->getNext()){
        iterador = iterador->getNext();
        cout<<"El elemento con indice "<<i<<" con cadena "<<iterador->getCadena()<<" tiene un data con valor: "<<iterador->getData()<<endl;
        i++;
    }
    cout<<endl;
}

void ListaSimple::push_back(int value, string word){
    ListaSimple* iterador = this;

    while(iterador->getNext()){
        iterador = iterador->getNext();
    }

    iterador->setNext(new ListaSimple(value,word));
    size++;
}

int ListaSimple::getData() const
{
return data;
}

void ListaSimple::setData(int value)
{
data = value;
}

ListaSimple *ListaSimple::getNext() const
{
return next;
}

void ListaSimple::setNext(ListaSimple *value)
{
next = value;
}

int ListaSimple::getSize() const
{
return size;
}

void ListaSimple::setSize(int value)
{
size = value;
}

string ListaSimple::getCadena() const
{
return cadena;
}

void ListaSimple::setCadena(const string &value)
{
cadena = value;
}

