#include "listaint.h"
#include <iostream>

using namespace  std;

ListaInt::ListaInt(int _dato){
    dato = _dato;
    next = nullptr;
    size = 0;
    index = 0;
}

int ListaInt::getDato() const{
    return dato;
}

void ListaInt::setIndex(unsigned short value){
    index = value;
}

ListaInt *ListaInt::getNext() const{
    return next;
}

void ListaInt::push_back(int value){
    if(next){
        next->push_back(value);
    }else{
        next = new ListaInt(value);
        next->setIndex(index + 1);
    }
    size++;
}

void ListaInt::push_front(int value){
    if(next){
        next->push_front(value);
    }else{
        ListaInt* aux = new ListaInt(value);
        aux->next = this->next;
        this->next = aux;
    }
    size++;
}


void ListaInt::at(unsigned int i){
    if(i <= 0 || i > size) throw string("Fuera de la lista.");
    else cout << next << endl;
}

void ListaInt::search(int value) const{
    if(next){
        if(next->getDato() == value){   // si es el dato buscado lo devuelve
            cout << index << endl;
        }else{                          // sino sigue buscando
            next->search(value);
        }
    }else{                              // si llega al ultimo sin encontrarlo devuelve -1
        cout  << "-1" << endl;
    }
}

bool ListaInt::erase(int value){
    if(next){
        if(next->getDato() == value){
            ListaInt* aux = next->getNext();    //guardo referencia del elemento posterior
            delete next;
            next = aux;                         // actualizo next para que apunte al elemento posterior
            return true;
        }
        else next->erase(value);                //sino sigue buscando
    }else{
        return false;
    }
}

void ListaInt::printAll() const{
    if(next) next->print();
    else cout << "Lista vacia" << endl;
}

void ListaInt::print() const{
    cout << index << ": " << dato << endl;
    if(next) next->print();
    else cout << endl;
}

