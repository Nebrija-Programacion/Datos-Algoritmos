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

void List::push_back(Data *d)
{
    Node* n = new Node(d);

    if(last){
        last->setNext(n);
        n->setPrev(last);
        last = n;
    }else{ // empty list
        last = n;
        first = n;
    }
    size++;
}

void List::push_front(Data *d)
{
    Node * n = new Node(d);
    if(first){
        n->setNext(first);
        first->setPrev(n);
        first = n;
    }else{ // empty list
        first = n;
        last = n;
    }
    size++;
}

Data *List::pop_back()
{
    Data* d = last->getData();
    last = last->getPrev();
    delete last->getNext();
    last->setNext(nullptr);
    size--;
    return new Data{d};
}

Data *List::pop_front()
{
    Data* d = first->getData();
    first = first->getNext();
    delete first->getPrev();
    first->setPrev(nullptr);
    size--;
    return new Data(d);
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

void List::moveUp(Node *n)
{
    //node is already the first one, cannot be moved up
    if(n == first) return;
    //node is the last one
    if(n == last){
        if(n->getPrev() == first){ // Prev node is first. There are only 2 nodes
            first = n;
            last = n->getPrev();
            n->setPrev(nullptr);
            last->setNext(nullptr);
            first->setNext(last);
            last->setPrev(first);
        }else{
            last = n->getPrev();
            n->setPrev(last->getPrev());
            last->getPrev()->setNext(n);
            last->setPrev(n);
            last->setNext(nullptr);
            n->setNext(last);
        }
    }
    if(n != last){
        if(n->getPrev() != first){
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
            first->setNext(aux);
            aux->setPrev(first);
            n->setNext(first);
            n->setPrev(nullptr);
            first->setPrev(n);
            first = n;
        }
    }
}

void List::bubbleSort()
{
    Node* it = first;
    while(it != nullptr){
        if(it == first){
            it = it->getNext();
            continue;
        }
        // if current node is smaller than previous
        Node* current = it;
        Node* prev = it->getPrev();
        if( *current < *prev){
           moveUp(it);
           continue;
        }
        it = it->getNext();
    }
}

Node *List::search(int value)
{
    return this->getFirst()->search(value);
}

Node *List::searchb(int value, Node *Frst, Node *Lst, int sizee)
{
    if(value == Frst->getData()->getValue()){
        return Frst;
    }
    if(value == Lst->getData()->getValue()){
        return Lst;
    }
    Node* middle = getMiddle(sizee,Frst );
    if(value == middle->getData()->getValue()){
        return middle;
    }
    Node* newFirst, *newLast;
    if(value < middle->getData()->getValue()){
        newFirst = Frst;
        newLast = middle;
        sizee = sizee/2;
        return searchb(value, newFirst, newLast, sizee);
        }else{
        newFirst = middle;
        newLast = last;
        sizee = sizee/2;
        return searchb(value, newFirst, newLast, sizee);
    }

}

Node *List::getMiddle(int size, Node *Frst)
{
    Node* it = Frst;
    for(int i=0; i < size/2 ; i++, it=it->getNext()){
    }
    return it;
}

ostream & operator<<(ostream &os, const List &l)
{
    for(Node* it = l.getFirst(); it != nullptr; it = it->getNext()){
        os << it->getData()->getValue() << " - ";
    }
    return os;
}
