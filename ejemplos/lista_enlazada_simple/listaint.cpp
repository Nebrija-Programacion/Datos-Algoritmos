#include "listaint.h"

#include <iostream>

using namespace  std;

ListaInt::ListaInt(int _dato):
    dato{_dato},
    next{nullptr},
    size{0}
{

}

void ListaInt::push_back(int value){
    //si hay un elemento a continuacion
    if(next){
        next->push_back(value);
    }else{ // soy el ultimo elemento
        next = new ListaInt(value);
    }

    // Incremento el tamano
    size++;
}

void ListaInt::push_front(int value){
    ListaInt* aux = new ListaInt(value);
    //si hay un elemento a continuacion
    if(next){
        aux->setNext(next);
    }
    next = aux;
    size++;
}


int & ListaInt::getDato()
{
    return dato;
}

void ListaInt::printAll() const
{
    cout << "Size: " << size << endl;
    if(next) next->print();
    else cout << "Lista vacia" << endl;
}

int &ListaInt::at(unsigned int i)
{
    return refAt(i)->getDato();
}

ListaInt *ListaInt::refAt(unsigned int i) const
{
    if(i == 0) throw string("out of bounds (starts with 1)");
    if(i > size) throw string("Index is out of bounds");
    ListaInt * aux = next;
    unsigned short index = 0;
    while(aux){
        index++;
        if(index == i) return aux;
        aux = aux->next;
    }
    throw string("Unexpected error");
}



void ListaInt::print(int i) const
{
    cout << i << ": " << dato << endl;
    if(next) next->print(++i);
    else cout << endl;
}

unsigned int ListaInt::getSize() const
{
    return size;
}

ListaInt *ListaInt::getNext() const
{
    return next;
}

void ListaInt::setNext(ListaInt *value)
{
    next = value;
}


ListaInt *ListaInt::search(int value) const
{
    // si hay un elemento a continuacion
    if(next){
        // si el siguiente es el dato buscado, lo devuelve
        if(next->getDato() == value) return next;
        //en caso contrario sigue buscando
        else return next->search(value);
    }else{
        // si he llegado al ultimo sin encontrarlo devuelvo null
        return nullptr;
    }
}

bool ListaInt::erase(int value)
{
    if(next){
        // si el siguiente es el dato buscado, lo elimino
        if(next->getDato() == value){
            ListaInt* aux = next->next; //guardo referencia del elemento posterior
            delete next; // borro el elemento deseado (libero su espacio en memoria)
            next = aux; // actualizo next para que apunte al elemento posterior
            size--;
            return true; // devuelvo verdadero
        }
        //en caso contrario sigue buscando
        else{
            bool exit = next->erase(value);
            if(exit) size--;
            return exit;
        }
    }else{
        // si he llegado al ultimo sin encontrarlo devuelvo falso
        return false;
    }
}
