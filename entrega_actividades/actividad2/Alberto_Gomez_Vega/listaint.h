#ifndef LISTAINT_H
#define LISTAINT_H

class ListaInt{
private:
    void print(int i = 1) const;
    int dato;
    ListaInt* next;
public:
    ListaInt(int _dato = 0);
    void push_back(int value);
    void printAll() const;
    ListaInt*getNext() const;
    int&getDato();
    void greather_than(int value) const;
    void equal_to(int value) const;
    void lesser_than(int value) const;
    void within_interval(int value, int value2) const;
};

#endif // LISTAINT_H

