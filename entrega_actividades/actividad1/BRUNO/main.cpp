
#include <iostream>
using namespace std;

class Lista{
public:
    Lista(int n = 0);
    void push_back(int);
    void push_front(int);
    void print()const;
    Lista * getNext()const;
    int getData()const;
    void setData(int);
    void setNext(Lista *);
    void erase();
    bool search(int);

private:
    int data;
    Lista *next;
    unsigned int size = 0;
};
int menu(){
    int option;

    cout << "1 Anadir numero entero al final de la lista         "  << endl;
    cout << "2   Imprimir lista  "  << endl;
    cout << "3 Eliminar lista       "  << endl;
    cout << "0: SALIR                                             "  << endl;

    cin  >> option;

    return option;
}
int main() {

    int option;
    Lista * base = new Lista{0};

    do{
        option = menu();
        switch (option) {

        case 1:
        {


            int a;
            cout << "Introduce el numero que quieras anadir " << endl;
            cin  >> a;
            base->push_back(a);


            break;
        }
        case 2:
        {

            base->print();
            break;
        }

        case 3:
        {
            base->erase();
            base = new Lista{0};
            base->print();
            break;
        }

        default:
            option = 0;
            break;
        }
    }while (option);
    return 0;
}


Lista::Lista(int n){
    data = n;
    next = nullptr;
    size = 0;
}

void Lista::push_back(int valor){
    if(next){
        next -> push_back(valor);
    }else{
        next = new Lista(valor);
    }
}

void Lista::push_front(int valor)
{

}

void Lista::erase(){
    if (next) next->erase();
    delete this;
}

bool Lista::search(int valor)
{
    if(next){
        if(next->getData() == valor){
            return true;
        }else{
            next->search(valor);
        }
    }else{
        return false;
    }
}
void Lista::print()const{
    Lista *puntero = this->next;
    int i=0;

    cout << "hay " << this->size << " elementos en la lista" << endl;
    while(puntero != nullptr) {
        cout << ++i << ": " << puntero->getData() << endl;
        puntero = puntero->next;
    }
}


int Lista::getData()const{
    return data;
}
Lista * Lista::getNext()const{
    return next;
}
void Lista::setData(int i){
    data = i;
}
void Lista::setNext(Lista *puntero){
    next = puntero;
}
