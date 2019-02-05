#include "functions.h"
#include <iostream>

using namespace std;

void move(ListaInt *lista, unsigned int ori, unsigned int dest)
{
    if(ori == 0 || dest == 0) throw string("out of bounds (starts with 1)");
    if(ori > lista->getSize() || dest > lista->getSize()) throw string("Index is out of bounds");

    ListaInt * auxOri = lista->getNext();
    ListaInt * auxDest = lista->getNext();
    ListaInt * prev = lista;

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
