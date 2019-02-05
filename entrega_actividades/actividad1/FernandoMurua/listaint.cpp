#include "listaint.h"
#include <iostream>
using namespace std;

ListaInt::ListaInt(int _dato):
    dato{_dato},
    i{0},
    size{0},
    next{nullptr}

{

}

void ListaInt::push_back(int value){
    if(next){
        next->push_back(value);
    }else
    {
        next = new ListaInt(value);

        next->setI(i+1);
    }
    size++;
}

int ListaInt::getDato() const
{
    return dato;
}

int ListaInt::getI() const
{
    return i;
}

void ListaInt::setI(unsigned short int value)
{
    i = value;
}

bool ListaInt::erase(int value)
{
    if(next){
        if(next->getDato()==value){
            ListaInt*auxiliar=next->GetMeNExt();
            delete next;
            next=auxiliar;
            return true;
        }
        else {
            return next->erase(value);
        }
    }else {
        return false;
}
}



ListaInt *ListaInt::search(int value)
{
if(next){
    if(next->getDato()==value) return next;
    else  return next->search(value);
}else {
    return nullptr;
}

}

ListaInt *ListaInt::GetMeNExt() const
{
    return  next;
}

void ListaInt::print() const
{
ListaInt *auxiliar=this->next;

while(auxiliar !=nullptr){
    cout << auxiliar->getDato() << endl;
    auxiliar = auxiliar->next;
}
}

ListaInt *ListaInt::search_at(unsigned short value)
{
if(value>size) return nullptr;
}

void ListaInt::push_front(int value)
{
    ListaInt*auxiliar=new ListaInt{value};
    auxiliar->next=this->next;
    this->next=auxiliar;
    size++;
}

int ListaInt::getSize() const
{
    return size;
}







