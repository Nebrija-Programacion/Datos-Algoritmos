#include "functions.h"
#include <iostream>

using namespace std;

void move(Lista *lista, unsigned int ori, unsigned int dest)
{
    if(ori == 0 || dest == 0) throw string("out of bounds (starts with 1)");
    if(ori > lista->getSize() || dest > lista->getSize()) throw string("Index is out of bounds");

    Lista * auxOri = lista->getNext();
    Lista * auxDest = lista->getNext();
    Lista * prev = lista;

    // go to position ori
    for (unsigned int index{1}; index < ori; index++){
        prev = auxOri;
        auxOri = auxOri->getNext();
    }

    // prev points to element after aux
    prev->setNext(auxOri->getNext());

    //go to position dest
    for (unsigned int index{1}; index < (dest-1); index++){
        prev = auxDest;
        auxDest = auxDest->getNext();
    }

    // Place aux Ori after Dest
    auxOri->setNext(auxDest->getNext());
    auxDest->setNext(auxOri);
}

Lista *greaterThan(Lista* lista, int value)
{
    Lista* it = nullptr;
    Lista* result = new Lista();
    for(it = lista->getNext(); it != nullptr; it = it->getNext()){
        if(it->getDato() > value) result->push_back(new Lista(it));
    }

    return result;

}

Lista *equalTo(Lista *lista, int value)
{
    Lista* it = nullptr;
    Lista* result = new Lista();
    for(it = lista->getNext(); it != nullptr; it = it->getNext()){
        if(it->getDato() == value) result->push_back(new Lista(it));
    }

    return result;
}

Lista *lesserThan(Lista *lista, int value)
{
    Lista* it = nullptr;
    Lista* result = new Lista();
    for(it = lista->getNext(); it != nullptr; it = it->getNext()){
        if(it->getDato() < value) result->push_back(new Lista(it));
    }

    return result;

}

Lista *within(Lista *lista, int value1, int value2)
{
    Lista* it = nullptr;
    Lista* result = new Lista();
    for(it = lista->getNext(); it != nullptr; it = it->getNext()){
        if(it->getDato() > value1 && it->getDato() < value2) result->push_back(new Lista(it));
    }

    return result;
}
