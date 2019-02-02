

//  ListaSimple Header
//  ListaSimple.hpp
//  Listas_Simples_Enlazadas
//

#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include <iostream>

using namespace std;

class ListaSimple{
public:
    ListaSimple(int n = 0);
    void push_back(int);                //Añade un nuevo elemento al final de la lista
    void push_front(int);               //Añade un nuevo elemento al inicio de la lista (cambia el head de la lista!!!)
    ListaSimple * at(unsigned int i);            //Devuelve un puntero al elemento con índice i
    int search(int)const;               //Devuelve el índice i de la primera coincidencia del elemento buscado (o -1 si no lo encuentra).
    bool erase(unsigned int);           //Elimina el elemento de índice i
    void move(int, int);                //Mueve elemento i a posición j
    void print()const;                  //imprime la lista entera
    void printAll()const;
    void deleteAll();
    ListaSimple * getNext()const;       //te devuelve puntero al siguiente
    int getData()const;                 //devuelve el dato
    void setData(int);
    void setNext(ListaSimple *);
    ListaSimple * remove_duplicates();  //elimina los duplicados
private:
    int data;
    unsigned int size = 0;
    ListaSimple *next;
};
#endif   // LISTASIMPLE_HPP
