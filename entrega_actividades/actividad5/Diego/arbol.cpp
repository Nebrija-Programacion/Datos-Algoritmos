#include "arbol.h"

Arbol::Arbol()
{

}

void Arbol::print()
{
    yo->print();
    this->reset();
}

void Arbol::search(string _name, string _apellido1, string apellido2)
{
    Node* s = yo->search(_name, _apellido1, apellido2);
    if(s){
        if(s->getHijos().at(0)){
            for(int i = 0; i < s->getHijos().size(); i++){
                s->getHijos().at(i)->getHuman()->print();
            }
        }
        if(s->getPadres().at(0)){
            for(int i = 0; i < s->getPadres().size(); i++){
                s->getPadres().at(i)->getHuman()->print();
            }
        }
    }else{
        cout << "No encontrado" << endl;
    }
    this->reset();
}

void Arbol::reset()
{
    yo->reset();
}

Node *Arbol::getYo() const
{
    return yo;
}

void Arbol::setYo(Node *value)
{
    yo = value;
}
