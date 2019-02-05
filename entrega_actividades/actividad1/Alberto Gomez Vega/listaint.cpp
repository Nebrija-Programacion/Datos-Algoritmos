#include <iostream>
#include "listaint.h"

using namespace std;

ListaInt::ListaInt(int _dato):
    data{_dato}

{
}
void ListaInt::push_back(int value){
    if(next!=nullptr){
        next->push_back(value);
    }else{
        next = new ListaInt(value);
        next->setInd(index+1);
    }
    size++;
}
void ListaInt::setInd(unsigned int value)
{
    index = value;
}
void ListaInt::push_front(int value)
{
    if(next==nullptr){
        next->push_front(value);
    }else{
        ListaInt*aux = new ListaInt{value};
        aux->next = this->next;
        this->next = aux;
        //next->setInd(index+1); He intentado ponerlo así pero no funciona, por eso el push front solo pone indice 0
    }
    size ++;
}
int & ListaInt::at(unsigned short i, int s)
{
    if(s==-1){
        if (i>size) throw string ("El elemento no existe.");//No funciona, me sale error
        else return next->at(i,size);
    }else{
        if (i == index) return data;
        else return next->at(i,s);
    }
}
ListaInt *ListaInt::search(int value) const{
    if(next){
        if(next->getData() == value) return next; //Solo consigo sacar la referencia, no consigo sacar el indice.
        else return next->search(value);
    }else{
        return nullptr;
    }
}
bool ListaInt::erase(int value)
{
    if(next){
        // si el siguiente es el dato buscado, lo elimino
        if(next->getData() == value){
            ListaInt* aux = next->getNext(); //guardo referencia del elemento posterior
            delete next; // borro el elemento deseado (libero su espacio en memoria)
            next = aux; // actualizo next para que apunte al elemento posterior
            return true; // devuelvo verdadero
        }
        //en caso contrario sigue buscando
        else return next->erase(value);
    }else{
        // si he llegado al ultimo sin encontrarlo devuelvo falso
        return false;
    }
}
int ListaInt::getData() const
{
    return data;
}
ListaInt *ListaInt::getNext() const
{
    return next;
}
void ListaInt::move(int i, int j){
    //Ni idea de como hacerla
}
void ListaInt::printAll() const
{
    if(next) next->print();
    else cout << "0 elementos." << endl;
}
void ListaInt::print() const
{
    cout << "El elemento " << index << " con valor: " << data << endl;
    if(next) next->print();
    else cout << endl;
}

