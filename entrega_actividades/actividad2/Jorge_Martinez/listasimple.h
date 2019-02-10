#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include <iostream>

using namespace std;

int size = 0;

class ListaSimple{
public:
    ListaSimple(int _data=0);
    int getData() const;
    void setData(int value);
    ListaSimple *getNext() const;
    void setNext(ListaSimple *value);
    int getSize() const;
    void setSize(int value);
    string getCadena() const;
    void setCadena(const string &value);
    void push_back(int,string);
    void print();
    ListaSimple* greater_than(int);
    ListaSimple* equal_to(int);
    ListaSimple* lesser_than(int);
    ListaSimple* within_interval(int,int);

private:
    string cadena;
    int data;
    ListaSimple * next;

};

#endif
