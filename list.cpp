#include "list.h"

Node *List::getFirst() const
{
return first;
}

void List::setFirst(Node *value)
{
first = value;
}

Node *List::getLast() const
{
return last;
}

void List::setLast(Node *value)
{
    last = value;
}

void List::push_back(Data *da)
{
    Node *n=new Node(da);

    if(last){
        last->setNext(n);
        n->setPrev(last);
        last=n;
    }else{
        first=n;
        last=n;
    }
}

void List::push_front(Data *da)
{
    Node *n=new Node(da);

    if(first){
        first->setPrev(n);
        n->setNext(first);
        first=n;
    }else{
        first=n;
        last=n;
    }
}

Data *List::pop_back()
{
    Data *d=last->getDato();

    last=last->getPrev();
    delete last->getNext();
    last->setNext(nullptr);
    return new Data(*d);
}

Data *List::pop_front()
{
    Data *d=first->getDato();

    first=first->getNext();
    delete first->getPrev();
    first->setPrev(nullptr);
    return new Data(*d);
}

void List::moveDown(Node *no)
{
    if(no==first){
        return;
    }
    if(no==last){
        if(no->getPrev()==first){
            first=no;
            last=no->getPrev();
            first->setPrev(nullptr);
            first->setNext(last);
            last->setNext(nullptr);
            last->setPrev(first);
        }else{
            last=no->getPrev();
            no->setPrev(last->getPrev());
            last->setNext(nullptr);
            last->getPrev()->setNext(no);
            last->setPrev(no);
            no->setNext(last);
        }
    }
    if(no!=last){
        if(no==first->getNext()){
            Node* aux = no->getNext();

            first->setNext(aux);
            aux->setPrev(first);
            no->setNext(first);
            no->setPrev(nullptr);
            first->setPrev(no);
            first = no;
        }else{
            Node *aux1=no->getPrev()->getPrev();
            Node *aux2=no->getNext();
            no->getPrev()->setNext(aux2);
            aux2->setPrev(no->getPrev());
            aux1->setNext(no);
            no->setPrev(aux1);
            no->setNext(aux2->getPrev());
            no->getNext()->setPrev(no);
        }
    }
}

void List::stone()
{
    Node *it=last;
    while(it!=nullptr){
        if(it==last){
            it=it->getPrev();
            continue;
        }

        Node *a=it;
        Node *next=it->getNext();
        if(a < next){
            moveDown(it);
            continue;
        }

        it=it->getPrev();
    }
}

