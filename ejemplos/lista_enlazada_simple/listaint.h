#ifndef LISTAINT_H
#define LISTAINT_H


class ListaInt{
public:
    ListaInt(int _dato = 0);
    void push_back(int value);
    ListaInt* search(int value) const;
    bool erase(int value);
    ListaInt* getNext() const;
    int &getDato();
    void printAll() const;
    int & at(unsigned int i);
    void setIndex(unsigned short value);

private:
    void print(int i = 1) const;
    int dato;
    ListaInt* next;
    unsigned int size;
};

#endif // LISTAINT_H
