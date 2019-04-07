#include <iostream>
#include "listasimple.h"

using namespace std;

ListaSimple::ListaSimple(int _data){
    data = _data;
    cadena ="";
    setNext(nullptr);
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

    iterador->setNext(new ListaSimple(value));
    getNext()->setCadena(word);
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

