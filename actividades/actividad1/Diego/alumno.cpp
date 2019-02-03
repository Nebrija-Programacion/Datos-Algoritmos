#include "alumno.h"
#include <iostream>

Alumno::Alumno(int _ID)
{
    ID = _ID;
    next = nullptr;
}

void Alumno::push_back(int value)
{
    if(next){
        // Si hay un elemento despues
        next->push_back(value);
    }else{
        // Es ultimo elemento
        next = new Alumno(value);
        size++;
    }
}

Alumno *Alumno::search(int value) const
{
    if(next){
        // Si hay elemento a continuacion
        if(next->getID() == value){
            // Si es este
            return next;
        }else{
            // si no busca
            return next->search(value);
        }
    }else{
        // Si llega al ultimo
        return nullptr;
    }
}

int Alumno::getID() const
{
    return ID;
}

bool Alumno::erase(int value)
{
    if(next){
        if(next->getID() == value){
            // si es este
            Alumno* aux = next->getNext();
            delete next;
            next = aux;
            return true;
            size--;
        }else{
            return next->erase(value);
        }
    }else{
        return false;
    }
}

Alumno *Alumno::getNext() const
{
    return next;
}

void Alumno::push_front(int value)
{
    if(next == nullptr){
        next = new Alumno(value);
        size++;
    }else{
        Alumno* aux = next->getNext();
        int valorr = aux->getID();
        delete next;
        next = new Alumno(value);
        next->push_front(valorr);
        size++;
        }
    }


void Alumno::setID(int value)
{
    ID = value;
}

Alumno *Alumno::at(int value)
{
    times = size - ((size - value) - times);
    if(times > 0){
        times++;
        next->at(value);
    }
    times++;
    if(times == 0){
        return next;
        times = 0;
    }
}

bool Alumno::move(int value, int values)
{
    Alumno* this1 = next->at(value);
    Alumno* this2 = next->at(values);
    int aux1 = this1->getID();
    int aux2 = this2->getID();
    next->erase(value);
    next->erase(values);
    next->push_where_i_whant(aux1,value);
    next->push_where_i_whant(aux2,values);
}



void Alumno::push_where_i_whant(int value, int pos)
{
    times = size -((size - pos)- times);
    if(time>0){
        times++;
    }
    if(time == 0){
        if(next){
            Alumno* pass = next->getNext();
            next = new Alumno(value);
            next->push_where_i_whant(value, pos);

            }else{
            value = pass;
            Alumno* pass = next->getNext();
            next = new Alumno(value);
            size++;
            }
    }
}
