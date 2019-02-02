#include "listasimple.h"
#include <iostream>

using namespace std;

ListaSimple::ListaSimple(int _dato){
    dato = _dato;
    next = nullptr;
    indice = 0;
    size = 0;
}

int ListaSimple::getDato(){
    return dato;
}

int ListaSimple::getSize(){
    return size;
}

void ListaSimple::setIndice(int value){
    indice = value;
}

ListaSimple *ListaSimple::giveNext(){
    return next;
}

void ListaSimple::push_back(int value){
    if(next){
        next->push_back(value);
    }else{
        ListaSimple * aux = new ListaSimple{value};
        next = aux;
        next->setIndice(indice + 1);
    }
    size++;
}

void ListaSimple::push_front(int value){
    if(next == nullptr){
        ListaSimple * aux = new ListaSimple{value};
        next = aux;
    }else{
        ListaSimple * aux = new ListaSimple{value};
        // Estas dos lineas de codigo las he copiado pero no tengo ni idea de que significa
        aux->next = this->next;
        this->next = aux;
    }
}

bool ListaSimple::erase(int value){
    if(next){
        if(next->getDato() == value){
            ListaSimple *aux = next->giveNext();
            delete next;
            next = aux;
            return true;
        }else{
            next->erase(value);
        }
    }else{
        return false;
    }
}

int ListaSimple::search(int value){
    if(next){
        if(next->getDato() == value){
            return indice;
        }else{
            next->search(value);
        }
    }else{
        return -1;
    }
}

int &ListaSimple::atI(int i, int s){
    if(s == -1){// Es el primer elemento
        if(i >= size) throw string{"Te has salido de la lista"};
        else return next->atI(i,size);
    }else{
        if(i == indice) return dato; // si soy yo devuelvo el dato
        else return  next->atI(i, size); //si no llamo al siguiente
    }
}
// tambien he copiado esta funcion porque aqui si que estoy perdido del todo
void ListaSimple::move(int i, int j){
    int k{1};
        ListaSimple * prev = nullptr, * nodo_i = nullptr;
        ListaSimple * aux = this;
        if (i > 2 || j < i) return;
        while(k <= j){
            if(k == i){
                nodo_i = aux;
                prev->next = aux->next;
            }
            if(k == j){
                nodo_i->next= aux->next;
                aux->next = nodo_i;
            }
            prev= aux;
            aux = aux->next;
            k++;
        }
}

void ListaSimple::print(){
    cout << dato << endl;
    if(next){
        next->print();
    }
}
