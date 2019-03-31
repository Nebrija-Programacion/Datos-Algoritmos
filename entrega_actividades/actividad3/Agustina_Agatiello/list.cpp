#include "list.h"

List::List():
    first{nullptr},
    last{nullptr},
    size{0}
{

}

List::~List()
{
    delete first;
}

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

unsigned int List::getSize() const
{
    return size;
}

void List::setSize(unsigned int value)
{
    size = value;
}

void List::push_back(Data *d)
{
    Node* n = new Node(d);

    if(last){
        last->setNext(n);
        n->setPrev(last);
        last = n;
    }else{
        last = n;
        first = n;
    }
    size++;
}

void List::moveDown(Node *n)
{
    if(n == last) return;

    if(n == first){
        if(n->getNext() == last){
            last = n;
            first = n->getNext();
            n->setNext(nullptr);
            first->setPrev(nullptr);
            last->setPrev(first);
            first->setNext(last);
        }else{
            first = n->getNext();
            n->setNext(first->getNext());
            first->getNext()->setPrev(n);
            first->setNext(n);
            first->setPrev(nullptr);
            n->setPrev(first);
        }
    }

    if(n != first){
        if(n->getNext() != last){
            Node* aux1 = n->getNext()->getNext();
            Node* aux2 = n->getPrev();
            n->getNext()->setPrev(aux2);
            aux2->setNext(n->getNext());
            aux1->setPrev(n);
            n->setNext(aux1);
            n->setPrev(aux2->getNext());
            n->getPrev()->setNext(n);
        }else{
            Node* aux = n->getPrev();
            last->setPrev(aux);
            aux->setNext(last);
            n->setPrev(last);
            n->setNext(nullptr);
            last->setNext(n);
            last = n;
        }
    }
}

void List::rockSort()
{
    Node* it = last;

    while(it != nullptr){

        if(it == last){
            it = it->getPrev();
            continue;
        }

        Node* current = it;
        Node* next = it->getNext();
        if( *current < *next){
            moveDown(it);
            continue;
        }
        it = it->getPrev();
    }
}


ostream & operator<<(ostream &os, const List &l)
{
    for(Node* it = l.getFirst(); it != nullptr; it = it->getNext()){
        os << it->getData()->getValue() << " - ";
    }
    return os;
}
