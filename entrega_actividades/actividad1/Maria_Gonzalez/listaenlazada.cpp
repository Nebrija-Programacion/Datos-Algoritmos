#include "listaenlazada.h"

using namespace std;

Lista::Lista(int m)
{
    data = m;
    next = nullptr;
    size = 0;
}

void Lista::push_back(int valor)
{
    if(next){
        next -> push_back(valor);
    }else{
        next = new Lista(valor);
    }
}

void Lista::push_front(int valor)
{
    if(next){
        next -> push_front(valor);
    }else{
        next = new Lista(valor);
    }
}

Lista *Lista::search(int valor) const
{
    Lista *puntero = this->next;
        for(unsigned int i{1}; i <= size; i++){
            if(puntero->data == valor) return  next;
                    puntero = puntero->next;
        }
        return nullptr;
}

bool Lista::erase(int valor)
{
    if(next){
        if(next->getData() == valor){
            Lista* aux = next->getNext();
            delete next;
            next = aux;
            return true;
     }
     else return next->erase(valor);
     }else{
            return false;
    }
}

void Lista::printAll() const
{
    if (next) next->printAll();
    else cout << "Lista vacia " << endl;
    cout << data << endl;
}

void Lista::move(int i, int j)
{
    int r{1};
       Lista * prev = nullptr, * nodo_i = nullptr;
       Lista * aux = this;
       if (i > 2 || j < i) return;
       while(r <= j){
           if(r == i){
               nodo_i = aux;
               prev->next = aux->next;
           }
           if(r == j){
               nodo_i->next= aux->next;
               aux->next = nodo_i;
           }
           prev= aux;
           aux = aux->next;
           r++;
       }
}

Lista *Lista::at(unsigned int i)
{
    Lista *aux=this;
        if (i<1 || i>size) return nullptr;
        for(unsigned int j{1}; j <= i; j++){
            aux = aux->next;
        }
        return aux;
}

Lista *Lista::getNext() const
{
    return next;
}

int Lista::getData() const
{
    return data;
}

void Lista::setData(int i)
{
    data = i;
}

void Lista::setNext(Lista *puntero)
{
    next = puntero;
}





