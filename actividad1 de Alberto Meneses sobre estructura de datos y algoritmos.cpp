#include <iostream>
using namespace std;
class listaEnteros{
public:
    listaEnteros(int d){
        dato=d;
        next=nullptr;
        prev=nullptr;
    }
    int getDato() const;
    void setDato(int value);

    void push_back(int value);

    void push_front(int value);

    int & at(unsigned int i);

    listaEnteros *search(int value);

    bool erase(int value);

    listaEnteros *giveMeNext()const{
        return next;
    }

    bool is(int value)const{
        return dato==value;
    }
private:
    int dato;
    listaEnteros *next;
    listaEnteros *prev;
};

int main()
{
    listaEnteros *a=new listaEnteros{1};
    cout<<a->getDato()<<endl;
    a->push_back(2);
    a->push_front(0);

    return 0;
}
int listaEnteros::getDato() const
{
return dato;
}

void listaEnteros::setDato(int value)
{
dato = value;
}

void listaEnteros::push_back(int value){
    if (next==nullptr){
        listaEnteros *aux=new listaEnteros{value};
        next = aux;
    }else{
        next->push_back(value);
    }
}

void listaEnteros::push_front(int value){
    if (prev==nullptr){
        listaEnteros *aux=new listaEnteros{value};
        prev = aux;
    }else{
        prev->push_front(value);
    }
}

int &listaEnteros::at(unsigned int i)
{
    return at(i)->getDato();
}

listaEnteros *listaEnteros::search(int value)
{
    if(dato == value){
        return this;
    }else if(next == nullptr){
        cout<<-1<<endl;
    }else{
        return next->search(value);
    }
}

bool listaEnteros::erase(int value)
{
    if(next == nullptr){
        return false;
    }else{
        if(next->is(value)){
            listaEnteros *aux=next->giveMeNext();
            delete next;
            next=aux;
            return true;
        }
    }
}

