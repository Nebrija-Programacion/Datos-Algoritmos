#ifndef LISTAINT_H
#define LISTAINT_H
#include <iostream>

using namespace std;

class ListaInt{
public:
    ListaInt(int _dato, string _name);
    int getDato() const;
    string getName() const;
    ListaInt* getNext() const;
    void greater_than(int value) const;
    void equal_to(int value) const;
    void lesser_than(int value) const;
    void within_interval(int value1, int value2) const;
    void push_back(int value, string name);
    void printAll() const;

private:
    int dato;
    string name;
    unsigned int size;
    ListaInt* next;
    void print() const;
};

#endif // LISTAINT_H
