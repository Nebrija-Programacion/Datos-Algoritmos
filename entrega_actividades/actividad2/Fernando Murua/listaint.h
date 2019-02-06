#ifndef LISTAINT_H
#define LISTAINT_H


class LIstaInt
{
public:
    LIstaInt(int _dato=0);
    LIstaInt *getNext() const;
    void setNext(LIstaInt *value);

    int getDato() const;
    void setDato(int value);
    void push_back(int value);
    void print();

private:
    int dato;
    LIstaInt *next;
    int size;
};

#endif // LISTAINT_H
