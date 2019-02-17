#include "listaint.h"
#include <iostream>

using namespace  std;

ListaInt::ListaInt(int _dato, string _name){
    dato = _dato;
    name = _name;
    next = nullptr;
    size = 0;
}

int ListaInt::getDato() const{
    return dato;
}

string ListaInt::getName() const{
    return name;
}

ListaInt *ListaInt::getNext() const{
    return next;
}

void ListaInt::greater_than(int value) const{
    ListaInt *aux = new ListaInt{0, "Name"};

    for(ListaInt *it = getNext(); it != nullptr; it = it->getNext()){
        if(it->getDato() > value){
            aux->push_back(it->getDato(), it->getName());
        }
    }
    aux->printAll();
}

void ListaInt::equal_to(int value) const{
    ListaInt *aux = new ListaInt{0, "Name"};

    for(ListaInt *it = getNext(); it != nullptr; it = it->getNext()){
        if(it->getDato() == value){
            aux->push_back(it->getDato(), it->getName());
        }
    }
    aux->printAll();
}

void ListaInt::lesser_than(int value) const{
    ListaInt *aux = new ListaInt{0, "Name"};

    for(ListaInt *it = getNext(); it != nullptr; it = it->getNext()){
        if(it->getDato() < value){
            aux->push_back(it->getDato(), it->getName());
        }
    }
    aux->printAll();
}

void ListaInt::within_interval(int value1, int value2) const{
    ListaInt *aux = new ListaInt{0, "Name"};

    for(ListaInt *it = getNext(); it != nullptr; it = it->getNext()){
        if(it->getDato() > value1 && it ->getDato() < value2){
            aux->push_back(it->getDato(), it->getName());
        }
    }
    aux->printAll();
}

void ListaInt::push_back(int value, string name){
    if(next){
        next->push_back(value, name);
    }else{
        next = new ListaInt(value, name);
    }
    size++;
}

void ListaInt::printAll() const{
    if(next) next->print();
    else cout << "Lista vacia" << endl;
}

void ListaInt::print() const{
    cout << dato << ", " << name << endl;
    if(next) next->print();
    else cout << endl;
}



