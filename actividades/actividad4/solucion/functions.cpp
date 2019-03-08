#include "functions.h"
#include <iostream>

using namespace std;

Node* getMiddleNode(Node* first, int size){
    Node* it = first;

    for(int i=0; i < size/2 ; i++, it=it->getNext()){

    }

    return it;
}

Node *search(Node *first, Node *last, int dato, int size)
{
    if(dato == first->getData()->getValue()) return first;
    if(dato == last->getData()->getValue()) return last;

    Node* middle = getMiddleNode(first, size);

    if(dato == middle->getData()->getValue()) return middle;

    Node* newFirst, *newLast;

    if(dato < middle->getData()->getValue()){
        newFirst = first;
        newLast = middle;
        }else{
        newFirst = middle;
        newLast = last;
    }

    size = size / 2 + 1;

    return search(newFirst, newLast, dato, size);
}
