
//ListaSimple class definition

#include "ListaSimple.h"

using namespace std;
ListaSimple::ListaSimple(int n){   // CONSTRUCTOR -----------
    data = n;
    next = nullptr;
    size = 0;   // valor a CERO porque el HEAD no cuenta
}

void ListaSimple::push_back(int valor){
    if(next){
        next -> push_back(valor);
    }else{
        next = new ListaSimple(valor);
    }
}
ListaSimple * ListaSimple::greater_than(int value)const{
    ListaSimple *aux = new ListaSimple{0};
    ListaSimple *punteroL1 = this->next;
    ListaSimple *punteroL2 = aux;
    while(punteroL1 != nullptr){
        if(punteroL1->getData() > value){
            punteroL2->next = new ListaSimple{punteroL1->getData()};
            punteroL2 = punteroL2->next;
        }
        punteroL1 = punteroL1->next;
    }
    return aux;
}
ListaSimple * ListaSimple::equal_to(int value)const{
    ListaSimple *aux = new ListaSimple{0};
    ListaSimple *punteroL1 = this->next;
    ListaSimple *punteroL2 = aux;
    while(punteroL1 != nullptr){
        if(punteroL1->getData() == value){
            punteroL2->next = new ListaSimple{punteroL1->getData()};
            punteroL2 = punteroL2->next;
        }
        punteroL1 = punteroL1->next;
    }
    return aux;
}
ListaSimple * ListaSimple::lesser_than(int value)const{
    ListaSimple *aux = new ListaSimple{0};
    ListaSimple *punteroL1 = this->next;
    ListaSimple *punteroL2 = aux;
    while(punteroL1 != nullptr){
        if(punteroL1->getData() < value){
            punteroL2->next = new ListaSimple{punteroL1->getData()};
            punteroL2 = punteroL2->next;
        }
        punteroL1 = punteroL1->next;
    }
    return aux;
}
ListaSimple * ListaSimple::within_interval(int a, int b)const{
    ListaSimple *aux = new ListaSimple{0};
    ListaSimple *punteroL1 = this->next;
    ListaSimple *punteroL2 = aux;
    if(a > b) return aux;                                               // si a>b entonces devuelve un HEAD solo
    while(punteroL1 != nullptr){
        if(punteroL1->getData() >= a && punteroL1->getData() <= b){     // esta dentro del intervalo
            punteroL2->next = new ListaSimple{punteroL1->getData()};
            punteroL2 = punteroL2->next;
        }
        punteroL1 = punteroL1->next;
    }
    return aux;
}
void ListaSimple::deleteAll(){
    if (next) next->deleteAll();
    delete this;
}
void ListaSimple::printAll()const{
    ListaSimple *puntero = this->next;
    int i=0;

    cout << "hay " << this->size << " elementos en la lista" << endl;
    while(puntero != nullptr) {
        cout << ++i << ": " << puntero->getData() << endl;
        puntero = puntero->next;
    }
}
void ListaSimple::print()const{
    if (next) next->print();
    cout << data << endl;
}

int ListaSimple::getData()const{
    return data;
}
ListaSimple * ListaSimple::getNext()const{
    return next;
}
void ListaSimple::setData(int i){
    data = i;
}
void ListaSimple::setNext(ListaSimple *puntero){
    next = puntero;
}


