#ifndef LISTAINT_H
#define LISTAINT_H


class ListaInt{
public:
    ListaInt(int _dato = 0);
    void push_back(int value);
    void setInd(unsigned int value);
    void push_front(int value);
    int & at(unsigned short int index, int s=-1);
    ListaInt* search(int value) const;
    bool erase(int value);
    int getData() const;
    ListaInt * getNext() const;
    void move(int i, int j);
    void print() const;
    void printAll() const;

private:
    int data;
    int index{0};
    int size{0};
    ListaInt*next{nullptr};
};

#endif // LISTAINT_H

