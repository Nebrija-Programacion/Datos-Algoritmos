#ifndef NODE_H
#define NODE_H
#include <time.h>
#include <stdlib.h>
struct Node{
    int numero;
    Node *next;
};

class Node1{
    int numero_random;
public:

void PrimerE(Node *&primero, Node *&ultimo, int numero);
bool estaVacio(Node *primero);
void Insertar(Node *&primero, Node *&ultimo, int numero);
void MostrarLista(Node *comun);
};


#endif // NODE_H
