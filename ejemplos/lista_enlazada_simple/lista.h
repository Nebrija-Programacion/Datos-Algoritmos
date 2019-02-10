#ifndef LISTAINT_H
#define LISTAINT_H

#include <iostream>

using namespace std;


class Lista{
public:
    Lista(int _dato = 0);
    Lista(Lista* other);
    void push_back(int value);
    void push_back(Lista* node);
    void push_front(int value);
    void push_front(Lista* node);
    Lista* search(int value) const;
    bool erase(int value);
    void printAll() const;
    int & at(unsigned int i);
    Lista* refAt(unsigned int i) const;
    void setIndex(unsigned short value);

    Lista *getNext() const;
    void setNext(Lista *value);

    unsigned int getSize() const;

    int &getDato();

private:
    void print(int i = 1) const;
    int dato;
    Lista* next;
    unsigned int size;
};

#endif // LISTAINT_H
