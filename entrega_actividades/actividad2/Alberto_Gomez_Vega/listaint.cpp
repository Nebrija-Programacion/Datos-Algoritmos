#include "listaint.h"
#include <iostream>

using namespace  std;

ListaInt::ListaInt(int _dato):
    dato{_dato},
    next{nullptr}
{
}
void ListaInt::push_back(int value){
    if(next){
        next->push_back(value);
    }else{
        next = new ListaInt(value);
    }
}
void ListaInt::print(int i) const{
    cout << i << ": " << dato << endl;
    if(next) next->print(++i);
    else cout << endl;
}
void ListaInt::printAll() const{
    if(next) next->print();
    else cout << "Ninguno" << endl;
}
ListaInt*ListaInt::getNext() const{
    return next;
}
int&ListaInt::getDato(){
    return dato;
}
void ListaInt::greather_than(int value) const{
    ListaInt *aux=new ListaInt(0);
    for(ListaInt*it=getNext();it!=nullptr;it=it->getNext()){
        if(it->getDato()>value){
            aux->push_back(it->getDato());
        }
    }
    cout <<"Los valores encontrados son: " << endl;
    aux->printAll();
}
void ListaInt::equal_to(int value) const{
    ListaInt *aux=new ListaInt(0);
    for(ListaInt *it=getNext();it!=nullptr;it=it->getNext()){
        if(it->getDato()==value){
            aux->push_back(it->getDato());
        }
    }
    cout <<"Los valores encontrados son: " << endl;
    aux->printAll();
}
void ListaInt::lesser_than(int value) const{//No soy capaz de eliminar el elemnto inicial = 0 de la búsqueda.
    ListaInt *aux=new ListaInt(0);
    for(ListaInt*it=getNext();it!=nullptr;it=it->getNext()){
        if(it->getDato()<value){
            aux->push_back(it->getDato());
        }
    }
    cout <<"Los valores encontrados son: " << endl;
    aux->printAll();
}
void ListaInt::within_interval(int value, int value2) const{//No soy capaz de eliminar el elemnto inicial = 0 de la búsqueda.
    ListaInt *aux=new ListaInt(0);
    for(ListaInt *it=getNext();it!=nullptr;it=it->getNext()){
        if((it->getDato()>value)&&(it->getDato()<value2)){
            aux->push_back(it->getDato());
        }
    }
    cout <<"Los valores encontrados son: " << endl;
    aux->printAll();
}
