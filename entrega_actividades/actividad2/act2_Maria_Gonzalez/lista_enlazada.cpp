#include "lista_enlazada.h"

using namespace std;

ListaEnlada::ListaEnlada(int m)
{
    dato = m;
    next = nullptr;
    size = 0;
}

ListaEnlada *ListaEnlada::greater_than(int value) const
{
    ListaEnlada *aux = new ListaEnlada{0};
    ListaEnlada *puntero1 = this -> next;
    ListaEnlada *puntero2 = aux;

    while(puntero1 != nullptr){
        if((puntero1 -> getDato()) > value ){
            puntero2 -> next = new ListaEnlada {puntero1 -> getDato()};
            puntero2 = puntero2 -> next;
        }

        puntero1 = puntero1 -> next;
    }

    return aux;
}

ListaEnlada *ListaEnlada::equal_to(int value) const
{
    ListaEnlada *aux = new ListaEnlada{0};
    ListaEnlada *puntero1 = this -> next;
    ListaEnlada *puntero2 = aux;

    while(puntero1 != nullptr){
        if((puntero1 -> getDato()) == value){
            puntero2 -> next = new ListaEnlada {puntero1 -> getDato()};
            puntero2 = puntero2 -> next;
        }

        puntero1 = puntero1 -> next;
    }

    return aux;
}

ListaEnlada *ListaEnlada::lesser_than(int value) const
{
    ListaEnlada *aux = new ListaEnlada{0};
    ListaEnlada *puntero1 = this -> next;
    ListaEnlada *puntero2 = aux;

    while(puntero1 != nullptr){
        if((puntero1 -> getDato()) < value){
            puntero2 -> next = new ListaEnlada {puntero1 -> getDato()};
            puntero2 = puntero2 -> next;
        }

        puntero1 = puntero1 -> next;
    }

    return aux;
}

ListaEnlada *ListaEnlada::within_interval(int x, int y) const
{
    ListaEnlada *aux = new ListaEnlada{0};
    ListaEnlada *puntero1 = this -> next;
    ListaEnlada *puntero2 = aux;

    if(x > y){
        return  aux;
    }

    while(puntero1 != nullptr){
        if((puntero1 -> getDato()) >= (x && puntero1 -> getDato()) <= y ){
            puntero2 -> next = new ListaEnlada{puntero1 -> getDato()};
            puntero2 = puntero2 -> next;
        }

        puntero1 = puntero1 -> next;
    }
    return aux;
}

void ListaEnlada::push_back(int value)
{
    if(next){
        next ->push_back(value);
    }else{
        next = new ListaEnlada(value);
    }
}

void ListaEnlada::print() const
{
    if (next) next -> print();
    cout << dato << endl;
}

ListaEnlada *ListaEnlada::getNext() const
{
    return next;
}

int ListaEnlada::getDato() const
{
    return dato;
}

void ListaEnlada::setDato(int a)
{
    dato = a;
}

void ListaEnlada::setNext(ListaEnlada *puntero)
{
    next = puntero;
}





