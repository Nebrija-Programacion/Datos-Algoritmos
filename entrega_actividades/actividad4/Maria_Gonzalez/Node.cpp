#include "node.h"
#include <iostream>

using namespace std;


void Node1::PrimerE(Node *&primero, Node *&ultimo, int numero)
{
    Node *lista = new Node;
    lista ->numero = numero;
    lista ->next = NULL;
    primero = lista;
    ultimo = lista;
}

bool Node1::estaVacio(Node *primero)
{
    if( primero == NULL){
        return true;
    }
}

void Node1::Insertar(Node *&primero, Node *&ultimo, int numero)
{
    if (estaVacio(primero)){
        PrimerE(primero, ultimo, numero);
    }else{
        Node *lista = new Node;
        lista ->numero;
        lista -> next = NULL;
        ultimo -> next = lista;
        ultimo = lista;
    }
}

void Node1::MostrarLista(Node *comun)
{
    if (estaVacio(comun)){
        cout << "La lista esta vacia ";
    }else{
        cout << "lista: " << endl << endl;
        while(comun != NULL){
            cout << comun -> next;
        }
    }
};

