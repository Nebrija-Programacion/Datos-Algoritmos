//
//ListaSimple class definition
//-------------------

#include <Listasimple.h>

using namespace std;

ListaSimple::ListaSimple(int n){   // CONSTRUCTOR -----------
    data = n;
    next = nullptr;
    size = 0;
}
void ListaSimple::push_back(int valor){
    if(next){
        next -> push_back(valor);
    }else{
        next = new ListaSimple(valor);
    }
}
void ListaSimple::push_front(int valor){
    ListaSimple *aux = new ListaSimple{valor};
    aux->next = this->next;
    this->next = aux;
    this->size++;
}

ListaSimple * ListaSimple::at(unsigned int i){
    ListaSimple *aux=this;
    if (i<1 || i>size) return nullptr;  // ERROR -> no existe -> devuelve null
    for(unsigned int j{1}; j <= i; j++){
        aux = aux->next;                // si hay, avanza hasta la posicion
    }
    return aux;                         // devuelve aux, que es el que busca
}

int ListaSimple::search(int ele)const{
    ListaSimple *puntero = this->next;
    for(unsigned int i{1}; i <= size; i++){
        if(puntero->data == ele) return i;
        puntero = puntero->next;
    }
    return -1;
}

bool ListaSimple::erase(unsigned int j){
    ListaSimple * aux = this, * prev = nullptr;
    if(j < 1 || j > size) return false;
    for(unsigned int i{1}; i <= j; i++){
        prev = aux;
        aux = aux->next;
    }
    prev->next = aux->next;
    delete aux;
    this->size--;
    return true;
}

ListaSimple * ListaSimple::remove_duplicates(){
    ListaSimple *aux = new ListaSimple{0};
    ListaSimple *punteroL1 = this->next;
    ListaSimple *punteroL2;
    ListaSimple *previoL2;
    while(punteroL1 != nullptr){
        punteroL2 = aux->next;
        previoL2 = aux;
        while(punteroL2 != nullptr && punteroL1->data != punteroL2->data){
                previoL2 = punteroL2;
                punteroL2 = punteroL2->next;
        }
        if(punteroL2 == nullptr){
            previoL2->next = new ListaSimple{punteroL1->data};
        }
        punteroL1 = punteroL1->next;
    }
    return aux;
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

void ListaSimple::deleteAll(){              // funcion RECURSIVA porque es muy ELEGANTE "*****"
    if (next) next->deleteAll();
    delete this;
}


ListaSimple * ListaSimple::getNext()const{
    return next;
}
int ListaSimple::getData()const{
    return data;
}

void ListaSimple::setData(int i){
    data = i;
}
void ListaSimple::setNext(ListaSimple *puntero){
    this->next = puntero;
}








