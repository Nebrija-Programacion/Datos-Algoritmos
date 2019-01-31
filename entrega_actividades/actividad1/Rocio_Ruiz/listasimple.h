//
//  ListaSimple.hpp
//  Listas_Simples_Enlazadas
//


#ifndef LISTASIMPLE_HPP
#define LISTASIMPLE_HPP

#include <iostream>

using namespace std;

class ListaSimple{
    public:
        ListaSimple(int);
        void push_back(int);            //Añade un nuevo elemento al final de la lista
        ListaSimple * push_front(int);  //Añade un nuevo elemento al inicio de la lista (cambia el head de la lista!!!)
        ListaSimple * at(int);          //Devuelve un puntero al elemento con índice i
        int search(int);                //Devuelve el índice i de la primera coincidencia del elemento buscado (o -1 si no lo encuentra).
        bool erase(int);                //Elimina el elemento de índice i
        void move(int, int);            //Mueve elemento i a posición j
        void print();                   //imprime la lista entera
        ListaSimple * getNext();        //te devuelve puntero al siguiente
        int getData();                  // devuelve el dato
    private:
        int data;
        ListaSimple *next;
};
#endif   // LISTASIMPLE_HPP
