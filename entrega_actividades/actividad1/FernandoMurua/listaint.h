#ifndef LISTAINT_H
#define LISTAINT_H


class ListaInt{
public:
    ListaInt(int _dato = 0);
    void push_back(int value);
    int getDato() const;
    int getI() const;
    void setI(unsigned short int value);
    bool erase(int value);
    ListaInt *search(int value);
    ListaInt *GetMeNExt()const;
    void print()const;
    ListaInt *search_at(unsigned short int value);
    void push_front(int value);

    int getSize() const;

private:
    int dato;
    int i;
    int size;
    ListaInt* next;
};


#endif // LISTAINT_H
