//
//  ListaSimple.cpp
//  Listas_Simples_Enlazadas
//
//  Created by Rocio Ruiz Ruiz on 27/1/19.
//  Copyright © 2019 Rocio Ruiz Ruiz. All rights reserved.
//

#include "ListaSimple.hpp"

using namespace std;

ListaSimple::ListaSimple(int n){   // CONSTRUCTOR -----------
        data = n;
        next = nullptr;
}
void ListaSimple::push_back(int n){  // AÑADE NODO AL FINAL ----
    if(next != nullptr){    // si hay otro detras sigue ---
        next->push_back(n);
    }
    else {                  // si es el ultimo entonces engancha nuevo
        next = new ListaSimple{n};
    }
}
ListaSimple *ListaSimple::push_front(int n){
    ListaSimple *aux = new ListaSimple{n};  // creo el nuevo
    aux->next = this;   // el nuevo apunta a este que era el primero
    return aux;         // devuelve direccion del nuevo -> nuevo head
}
ListaSimple *ListaSimple::at(int i){
    ListaSimple *aux=this;
    if (i<1) return nullptr;   // ERROR -> no existe -> devuelve null
    for(int j{1}; j < i; j++){
        if (aux) aux = aux->next;  // si hay, avanza hasta la posicion
    }
    return aux;                 // devuelve aux, que es el que busca
}
int ListaSimple::search(int ele){
    int i=1, j;
    if (data != ele) {
        if(next == nullptr) return -1;
        else {
            j=next->search(ele);
            if (j==-1) i=-1; else i+=j;
        }
    }
    return i;
}
void ListaSimple::print(){
    cout << data << endl;
    if(next) next->print();
}
bool ListaSimple::erase(int j){ //no elimina el primero
    ListaSimple * aux = this, * prev = nullptr;
    int i{1};
    if(j <= 1) return false; // no existe o es el primero
    while(i != j){
        prev= aux;
        aux = aux->next;
        i++;
    }
    if (prev) prev->next = aux->next;
    delete aux;
    return true;
}
ListaSimple * ListaSimple::getNext(){
    return next;
}
int ListaSimple::getData(){
    return data;
}
void ListaSimple::move(int i, int j){   // i no puede ser 1;
    int k{1};
    ListaSimple * prev = nullptr, * nodo_i = nullptr;
    ListaSimple * aux = this;
    if (i > 2 || j < i) return;
    while(k <= j){
        if(k == i){
            nodo_i = aux;
            prev->next = aux->next;
        }
        if(k == j){
            nodo_i->next= aux->next;
            aux->next = nodo_i;
        }
        prev= aux;
        aux = aux->next;
        k++;
}



//ListaSimple *ListaSimple::remove_duplicates(){
    
//}

//    SEARCH No recursivo ---------------
//    ListaSimple * aux;
//    int dato = data, i=1;
//    while (dato != ele) {
//        i++;
//        aux = next;
//        dato = aux->data;
//    }
//    return i;


    

}

