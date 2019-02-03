#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H

#include <iostream>

using namespace std;

class Lista{
private:
    int data;
    Lista *next;
    unsigned int size = 0;
public:
    Lista(int m=0);
    void push_back(int valor); //Añade un elemento al final de la lista
    void push_front(int valor); //Añade un elemento al inicio de la lista
    Lista* search(int valor) const; // busca elementos en la lista
    bool erase(int valor); //Elimina un elemnto de la lista
    void printAll() const; //Imprime todos los elemtos de la lista
    void move(int i, int j);//Mueve elementos en la posicion i j
    Lista * at(unsigned int i);// busca elemntos a trvés del indice de la lista

    Lista * getNext()const; // para el siguiente puntero
    int getData()const;
    void setData(int i);
    void setNext(Lista *puntero);
};

#endif
