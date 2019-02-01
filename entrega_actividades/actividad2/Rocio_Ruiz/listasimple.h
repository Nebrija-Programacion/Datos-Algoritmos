//
//  ListaSimple.h
//  Listas_Simples_Enlazadas
//


#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include <iostream>

using namespace std;

class ListaSimple{
    public:
    ListaSimple(int);
    void push_back(int);            //Añade un nuevo elemento al final de la lista
    void print();                   //imprime la lista entera
    ListaSimple * getNext();        //te devuelve puntero al siguiente
    int getData()const;             // devuelve el dato
    void setI(int);
    ListaSimple * greater_than(int);
    ListaSimple * equal_to(int);
    ListaSimple * lesser_than(int);
    ListaSimple * within_interval(int,int);

    private:
    int data, i;
    unsigned int size = 1;
    ListaSimple *next;

};
#endif
