#ifndef LISTAINT_H
#define LISTAINT_H


class ListaInt{
public:
    ListaInt(int _dato = 0);
    void push_back(int value);
    void push_front(int value);
    ListaInt* search(int value) const;
    bool erase(int value);
    int &getDato();
    void printAll() const;
    int & at(unsigned int i);
    ListaInt* refAt(unsigned int i) const;
    void setIndex(unsigned short value);

    ListaInt *getNext() const;
    void setNext(ListaInt *value);

    unsigned int getSize() const;

private:
    void print(int i = 1) const;
    int dato;
    ListaInt* next;
    unsigned int size;
};

#endif // LISTAINT_H
