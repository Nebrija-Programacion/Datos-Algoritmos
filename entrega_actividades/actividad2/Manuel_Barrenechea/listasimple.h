#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
#include <iostream>

using namespace std;

class ListaSimple
{
private:
    int dato;
    string nombre;
    ListaSimple *next;
public:
    ListaSimple(int _dato, string _nombre);
    int getDato()const;
    ListaSimple *getNext()const;
    string getNombre()const;
    ListaSimple *greater_than(int value);
    ListaSimple *equal_to(int value);
    ListaSimple *lesser_than(int value);
    ListaSimple *within_interval(int value, int value1);
    void push_back(int value, string nombre);
    void print();
};

#endif // LISTASIMPLE_H
