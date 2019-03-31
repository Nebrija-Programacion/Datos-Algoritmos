#include "estructura.h"

Estructura::Estructura()
{
FirstB=nullptr;
LastB=nullptr;
FirstT=nullptr;
LastT=nullptr;
}

Node *Estructura::getFirstT() const
{
    return FirstT;
}

void Estructura::setFirstT(Node *value)
{
    FirstT = value;
}

Node *Estructura::getLastT() const
{
    return LastT;
}

void Estructura::setLastT(Node *value)
{
    LastT = value;
}

Node *Estructura::getFirstB() const
{
    return FirstB;
}

void Estructura::setFirstB(Node *value)
{
    FirstB = value;
}

Node *Estructura::getLastB() const
{
    return LastB;
}

void Estructura::setLastB(Node *value)
{
    LastB = value;
}

void Estructura::push(Data *d)
{
  Node *aux=new Node(d);
  if(d->getDato()%2==0){
    if(!FirstT){
   FirstT=aux;
   LastT=aux;
   cout <<"No hay FirstTop" << endl;
}else{
        if(d->getDato()%5==0||d->getDato()%3==0){
            aux->setPrev(LastT);
            LastT->setNext(aux);
            LastT=aux;
            cout <<"Hay FirstTop y es multiplo de 3 o 5" << endl;
        }else {
            aux->setNext(FirstT);
            FirstT->setPrev(aux);
            FirstT=aux;
            cout <<"Hay FirstTop y no es multiplo de 3 o 5" << endl;
        }
}

  }else{
      if(!FirstB){
          FirstB=aux;
          LastB=aux;
             cout <<"No hay FirstB" << endl;
      }else{
          if(d->getDato()%5==0||d->getDato()%3==0){
              aux->setPrev(LastB);
              LastB->setNext(aux);
              LastB=aux;
              cout <<"Hay FirstB y es multiplo de 3 o 5" << endl;
      }else {
              aux->setNext(FirstB);
              FirstB->setPrev(aux);
              FirstB=aux;
              cout <<"Hay FirstB y no es multiplo de 3 o 5" << endl;
          }
  }
  }
}

void Estructura::print()
{
FirstT->print();
}

