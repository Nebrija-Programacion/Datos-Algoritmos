#include "list.h"

List::List():
    first{nullptr},
    last{nullptr},
    size{0}
{

}

List::~List()
{
    delete last;
}

void List::push_back(Data *d)
{
    Node* n = new Node(d);

    if(first){
        first->setNext(n);
        n->setPrev(first);
        first = n;
    }else{ // empty list
        first = n;
        last = n;
    }
    size++;
}

void List::push_front(Data *d)
{
    Node * n = new Node(d);
    if(last){
        n->setNext(last);
        last->setPrev(n);
        last = n;
    }else{ // empty list
        last = n;
        first = n;
    }
    size++;
}

Data *List::pop_back()
{
    Data* d = first->getData();
    first = first->getPrev();
    delete first->getNext();
    first->setNext(nullptr);
    size--;
    return new Data{d};
}

Data *List::pop_front()
{
    Data* d = last->getData();
    last = last->getNext();
    delete last->getPrev();
    last->setPrev(nullptr);
    size--;
    return new Data(d);
}

Node *List::getFirst() const
{
    return last;
}

void List::setFirst(Node *value)
{
    last = value;
}

Node *List::getLast() const
{
    return first;
}

void List::setLast(Node *value)
{
    first = value;
}

unsigned int List::getSize() const
{
    return size;
}

void List::setSize(unsigned int value)
{
    size = value;
}

void List::moveDown(Node *n)
{
    //node is already the first one, cannot be moved up
    if(n == last) return;

    //node is the last one
    if(n == first){
        if(n->getPrev() == last){ // Prev node is first. There are only 2 nodes
            last = n;
            first = n->getPrev();
            n->setPrev(nullptr);
            first->setNext(nullptr);
            last->setNext(first);
            first->setPrev(last);
        }else{
            first = n->getPrev();
            n->setPrev(first->getPrev());
            first->getPrev()->setNext(n);
            first->setPrev(n);
            first->setNext(nullptr);
            n->setNext(first);

        }
    }

    if(n != first){
        if(n->getPrev() != last){
            Node* aux1 = n->getPrev()->getPrev();
            Node* aux2 = n->getNext();
            n->getPrev()->setNext(aux2);
            aux2->setPrev(n->getPrev());
            aux1->setNext(n);
            n->setPrev(aux1);
            n->setNext(aux2->getPrev());
            n->getNext()->setPrev(n);
        }else{
            Node* aux = n->getNext();
            last->setNext(aux);
            aux->setPrev(last);
            n->setNext(last);
            n->setPrev(nullptr);
            last->setPrev(n);
            last = n;
        }
    }
}

void List::bubbleSort()
{
    Node* it = last;

    while(it != nullptr){

        if(it == last){
            it = it->getNext();
            continue;
        }

        // if current node is smaller than previous

        Node* current = it;
        Node* prev = it->getPrev();
        if( *current > *prev){
           moveDown(it);
           continue;
        }

        it = it->getNext();
    }
}


ostream & operator<<(ostream &os, const List &l)
{
    for(Node* it = l.getFirst(); it != nullptr; it = it->getNext()){
        os << it->getData()->getValue() << " - ";
    }

    return os;

}
