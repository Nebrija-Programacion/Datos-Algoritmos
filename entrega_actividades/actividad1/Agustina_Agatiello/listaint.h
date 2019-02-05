#ifndef LISTAINT_H
#define LISTAINT_H

class ListaInt{
public:
    ListaInt(int _dato = 0);
    int getDato() const;
    void setIndex(unsigned short value);
    ListaInt* getNext() const;
    void push_back(int value);
    void push_front(int value);
    void at(unsigned int i);
    void search(int value) const;
    bool erase(int value);
    void printAll() const;

private:
    int dato;
    unsigned int size;
    unsigned short index;
    ListaInt* next;
    void print() const;
};

#endif // LISTAINT_H
