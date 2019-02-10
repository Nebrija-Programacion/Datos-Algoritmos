#include "lista.h"

#include <iostream>

using namespace  std;

Lista::Lista(int _dato):
    dato{_dato},
    next{nullptr},
    size{0}
{

}

Lista::Lista(Lista *other):
    next{nullptr},
    size{0}
{
    dato = other->getDato();
}

void Lista::push_back(int value){
    //si hay un elemento a continuacion
    Lista* node = new Lista(value);
    push_back(node);
}

void Lista::push_back(Lista *node)
{
    if(next){
        next->push_back(node);
    }else{
        next = node;
    }

    size++;
}

void Lista::push_front(Lista* node){
    if(next){
        node->setNext(next);
    }
    next = node;
    size++;
}

void Lista::push_front(int value){
    Lista* aux = new Lista(value);
    push_front(aux);
}


int & Lista::getDato()
{
    return dato;
}

void Lista::printAll() const
{
    cout << "Size: " << size << endl;
    if(next) next->print();
    else cout << "Lista vacia" << endl;
}

int &Lista::at(unsigned int i)
{
    return refAt(i)->getDato();
}

Lista *Lista::refAt(unsigned int i) const
{
    if(i == 0) throw string("out of bounds (starts with 1)");
    if(i > size) throw string("Index is out of bounds");
    Lista * aux = next;
    unsigned short index = 0;
    while(aux){
        index++;
        if(index == i) return aux;
        aux = aux->next;
    }
    throw string("Unexpected error");
}



void Lista::print(int i) const
{
    cout << i << ": " << dato << endl;
    if(next) next->print(++i);
    else cout << endl;
}

unsigned int Lista::getSize() const
{
    return size;
}

Lista *Lista::getNext() const
{
    return next;
}

void Lista::setNext(Lista *value)
{
    next = value;
}


Lista *Lista::search(int value) const
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

bool Lista::erase(int value)
{
    if(next){
        // si el siguiente es el dato buscado, lo elimino
        if(next->getDato() == value){
            Lista* aux = next->next; //guardo referencia del elemento posterior
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
