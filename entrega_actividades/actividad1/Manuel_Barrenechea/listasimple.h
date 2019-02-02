#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H


class ListaSimple{
private:
    int dato;
    int size;
    ListaSimple * next;
    int indice;
public:
    ListaSimple(int _dato);
    int getDato();//devuelve la variable dato
    int getSize();//devuelve la variable size
    void setIndice(int value);//va sumando 1 a la varible indice cuando se llama a la funcion
    ListaSimple *giveNext();//devuelve el valor al que hace referencia next
    void push_back(int value);//añade un elemento al final de la lista
    void push_front(int value);//añade un elemento al inicio de la lista
    int &atI(int i, int s = -1);//devuelve un puntero al elemento con indice i
    int search(int value);//devuelve el indice i de la primera coincidencia del elemento buscado(o -1 si no lo encuentra)
    bool erase(int value);//Elimina el elemento con indice i
    void move(int i, int j);//mueve el elemento i a la posicion j
    void print();//imprime todos los elementos de la lista
};

#endif // LISTASIMPLE_H
