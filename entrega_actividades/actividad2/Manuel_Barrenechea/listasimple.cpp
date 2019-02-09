#include "listasimple.h"

ListaSimple::ListaSimple(int _dato, string _nombre):
    dato{_dato},
    nombre{_nombre},
    next{nullptr}
{

}

int ListaSimple::getDato() const
{
    return dato;
}

ListaSimple *ListaSimple::getNext() const
{
    return next;
}

string ListaSimple::getNombre() const
{
    return nombre;
}

ListaSimple *ListaSimple::greater_than(int value)
{
    ListaSimple *aux = new ListaSimple{0, "Manuel"};
    ListaSimple *aux1 = this->next;
    ListaSimple *aux2 = aux;

    while(aux1 != nullptr){
        if(next->getDato() > value){
            aux2->next = new ListaSimple{aux1->getDato(), aux1->getNombre()};
            aux2 = aux2->next;
        }else{
            aux1 = aux1->next;
        }
    }
    return aux;
}

ListaSimple *ListaSimple::equal_to(int value)
{
    ListaSimple *aux = new ListaSimple{0, "Manuel"};
    ListaSimple *aux1 = this->next;
    ListaSimple *aux2 = aux;

    while(aux1 != nullptr){
        if(next->getDato() == value){
            aux2->next = new ListaSimple{aux1->getDato(), aux1->getNombre()};
            aux2 = aux2->next;
        }else{
            aux1 = aux1->next;
        }
    }
    return aux;
}

ListaSimple *ListaSimple::lesser_than(int value)
{
    ListaSimple *aux = new ListaSimple{0, "Manuel"};
    ListaSimple *aux1 = this->next;
    ListaSimple *aux2 = aux;

    while(aux1 != nullptr){
        if(next->getDato() < value){
            aux2->next = new ListaSimple{aux1->getDato(), aux1->getNombre()};
            aux2 = aux2->next;
        }else{
            aux1 = aux1->next;
        }
    }
    return aux;
}

ListaSimple *ListaSimple::within_interval(int value, int value1)
{
    ListaSimple *aux = new ListaSimple{0, "Manuel"};
    ListaSimple *aux1 = this->next;
    ListaSimple *aux2 = aux;

    while(aux1 != nullptr){
        if(next->getDato() > value && next->getDato() < value1){
            aux2->next = new ListaSimple{aux1->getDato(), aux1->getNombre()};
            aux2 = aux2->next;
        }else{
            aux1 = aux1->next;
        }
    }
    return aux;
}

void ListaSimple::push_back(int value, string nombre)
{
    if(next){
        next->push_back(value, nombre);
    }else{
        next = new ListaSimple{value, nombre};
    }
}

void ListaSimple::print()
{
    cout << dato << ", " << nombre << endl;
    if(next){
        next->print();
    }
}
