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
    void greater_than(int value);
    void equal_to(int value);
    void lesser_than(int value);
    void within_interval(int value, int value1);
    void push_back(int value, string nombre);
    void print();
};

#endif // LISTASIMPLE_H
