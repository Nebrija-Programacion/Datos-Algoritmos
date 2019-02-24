#include "listaint.h"
#include <iostream>
using namespace std;


LIstaInt::LIstaInt(int _dato)
{
dato=_dato;
next=nullptr;
size=0;
}

LIstaInt *LIstaInt::getNext() const
{
    return next;
}

void LIstaInt::setNext(LIstaInt *value)
{
    next = value;
}

int LIstaInt::getDato() const
{
    return dato;
}

void LIstaInt::setDato(int value)
{
    dato = value;
}

void LIstaInt::push_back(int value)
{
    if(next){
        next->push_back(value);
    }else {
    next=new LIstaInt(value);
    size++;
}
}

void LIstaInt::print()
{
 if(next){ cout << next->getDato() << endl;
    next->print();
}
}
