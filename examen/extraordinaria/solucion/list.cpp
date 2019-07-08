#include "list.h"
#include <iostream>

List::List():
    first{nullptr}
{

}

Node *List::search(unsigned int d)
{
    // si la lista esta vacia devuelvo nullptr
    if(!first) return nullptr;

    // si es mayor, busco despues
    if(d > first->data) return first->searchAfter(d);

    // de lo contrario, busco antes
    return first->searchBefore(d);

}

bool List::erase(unsigned int d)
{
    Node* n = search(d);
    if(!n) return false; // no lo borra porque no lo encuentra

    // si es el primero hago un nuevo primero
    if(n == first){

        // Si soly hay first, lo borro y listo
        if(!first->next && !first->prev){
            delete first; // libero memoria
            first = nullptr;
            return true; // Borrado!
        }

        Node* aux = first;
        // Si hay next, hago next el nuevo first
        if(first->next){
            first = first->next;
            first->prev = aux->prev;
            aux->prev->next = first; //el de la izquierda lo pongo al nuevo first
            delete aux; //libero memoria
            return true;
        }

        // Si no, hago prev el nuevo first
        first = first->prev;
        first->next = aux->next;
        aux->next->prev = first; //el de la izquierda lo pongo al nuevo first
        delete aux; //libero memoria
        return true;

    }

    // si es el ultimo por la derecha
    if(!n->next){
        Node* new_last = n->prev;
        new_last->next = nullptr;
        delete n; // libero la memoria de n
        return true; // Borrado!
    }

    // si es el ultimo por la izquierda
    if(!n->prev){
        Node* new_last = n->next;
        new_last->prev = nullptr;
        delete n; // libero la memoria de n
        return true; // Borrado!
    }

    // si esta en medio de dos nodos
    Node* aux_prev = n->prev;
    Node* aux_next = n->next;

    aux_prev->next = aux_next; // enlazo el anterior con el siguiente
    aux_next->prev = aux_prev; // enlazo el siguiente con el anterior
    delete n; // libero la memoria de n
    return true; // Borrado!

}

void List::insert(unsigned int d)
{
    Node* n = new Node(d);

    // si no hay primero, lo introduzco
    if(!first){
        first = n; // el prev y next the n seran nullptr;
        return;
    }

    // en caso contrario (hay first), compruebo si va a izquierda (menores) o a la derecha (mayores)

    // si n < first va a la izquierda
    if(*n < *first){
        // lo introduzco a la izquierda recursivamente
        first->insertBefore(n);
    }else{
        // lo introduzco a la derecha recursivamente
        first->insertAfter(n);
    }
}

ostream &operator <<(ostream &os, const List &l)
{
    // si hay elementos en la lista los recorro

    if(l.first){
        os << "Primer elemento: " << *(l.first) << endl;
        os << "Elementos menores: " << endl;
        Node* it = l.first->getPrev();
        while(it != nullptr){
            os << *it << " - ";
            it = it->getPrev();
        }

        os << endl;

        os << "Elementos mayores: " << endl;
        it = l.first->getNext();
        while(it != nullptr){
            os << *it << " - ";
            it = it->getNext();
        }
    }

    return os;
}
