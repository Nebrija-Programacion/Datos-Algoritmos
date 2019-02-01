#include <ListaSimple.h>

using namespace std;
ListaSimple::ListaSimple(int n){   // CONSTRUCTOR -----------
    data = n;
    next = nullptr;
    size = 1;
}

void ListaSimple::push_back(int valor){
    ListaSimple *punteroL1 = this;
    while(punteroL1->next != nullptr) punteroL1 = punteroL1->next; // me lleva hasta el ultimo
    punteroL1->next = new ListaSimple(valor);
    this->size++; //te suma al primero y los demas size=1;
}

ListaSimple * ListaSimple::greater_than(int value){
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
ListaSimple * ListaSimple::equal_to(int value){
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
ListaSimple * ListaSimple::lesser_than(int value){
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
ListaSimple * ListaSimple::within_interval(int a, int b){
    if(a < b) return nullptr;
    ListaSimple *aux = new ListaSimple{0};
    ListaSimple *punteroL1 = this->next;
    ListaSimple *punteroL2 = aux;
    while(punteroL1 != nullptr){
        if(punteroL1->getData() >= a || punteroL1->getData() <= b){
            punteroL2->next = new ListaSimple{punteroL1->getData()};
            punteroL2 = punteroL2->next;
        }
        punteroL1 = punteroL1->next;
    }
    return aux;
}
void ListaSimple::print(){
    ListaSimple *puntero = this->next;
    cout << puntero->getData() << endl;
}
int ListaSimple::getData()const{
    return data;
}

