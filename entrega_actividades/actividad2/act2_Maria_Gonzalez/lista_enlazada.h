#ifndef LISTA_ENLAZADA_H
#define LISTA_ENLAZADA_H

#include <iostream>

class ListaEnlada {
private:
    int dato;
    ListaEnlada * next;
    int size = 0;
public:
    ListaEnlada(int m = 0);

    ListaEnlada *greater_than (int value) const; //Devuelve una lista con los elementos mayores a x
    ListaEnlada * equal_to (int value) const; // Devuelve una lista con los elementos iguales a x
    ListaEnlada * lesser_than (int value) const; // Devuelve una lista con los elementos menores a x
    ListaEnlada * within_interval (int x, int y) const; //Devuelve una lista con elementos entre un intervalo

    void push_back(int value); //Añade un elemento al final de la lista
    void print() const; //Devuelve toda la lista entera

    ListaEnlada * getNext() const;
    int getDato() const;
    void setDato(int a);
    void setNext (ListaEnlada *puntero);
};

#endif // LISTA_ENLAZADA_H
