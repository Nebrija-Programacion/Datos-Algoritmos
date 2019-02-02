//  ListaSimple Header
//  ListaSimple.h
//  ListaSimple
//


#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include <iostream>

using namespace std;

class ListaSimple{
    public:
    ListaSimple(int n = 0);
    void push_back(int);                    // Añade un nuevo elemento al final de la lista
    void print()const;
    void printAll()const;                   // imprime la lista entera
    ListaSimple * getNext()const;           // devuelve puntero al siguiente elemento
    int getData()const;                     // devuelve el dato
    void setData(int);                      // cambia el valor del Data
    void setNext(ListaSimple *);            // cambia el puntero al siguiente
    ListaSimple * greater_than(int)const;        // devuelve una lista nueva con los MAYORES de un valor X
    ListaSimple * equal_to(int)const;            // devuelve una lista nueva con los IGUALES de un valor X
    ListaSimple * lesser_than(int)const;         // devuelve una lista nueva con los MENORES de un valor X
    ListaSimple * within_interval(int,int)const; // devuelve una lista nueva con elementos con valor en el INTERVALO
    void deleteAll();                       // borra todos los elementos de la lista, incluyendo el header

    private:
    int data;                               // data en el elemento
    ListaSimple *next;                      // puntero al siguiente elemento o NULLPTR
    unsigned int size = 0;                  // numero de elementos en la lista sin contar el HEAD
};
#endif
