//
//  funcionesglobales.cpp
//  ListaCompleta
//
//  Created by Rocio Ruiz Ruiz on 27/2/19.
//  Copyright © 2019 Rocio Ruiz Ruiz. All rights reserved.
//

#include "funcionesglobales.hpp"

Node* getMiddleNode(Node* first, int size){
    Node* it = first;
    
    for(int i=0; i < size/2 ; i++, it=it->getNext()){
        
    }
    
    return it;
    
}

Node *searchDicotomica(Node *first, Node *last, int dato, int size)
{
    if(dato == first->getData()->getValue()) return first;
    if(dato == last->getData()->getValue()) return last;
    
    Node* middle = getMiddleNode(first, size);
    if(dato == middle->getData()->getValue()) return middle;
    
    Node* newFirst, *newLast;
    
    if(dato < middle->getData()->getValue()){
        newFirst = first;
        newLast = middle; //------------------------------------------------------
    }else{
        newFirst = middle;
        newLast = last; //--------------------------------------------------------
    }
    
    size = size / 2;
    
    return searchDicotomica(newFirst, newLast, dato, size);
}
void moveAfter(Node* ptr, Node* dest){
    if(ptr->getNext()==nullptr){
        if(ptr->getPrev() == nullptr) return;
        ptr->getPrev()->setNext(nullptr);
        
    }
    if(ptr->getPrev() == nullptr){
        if(ptr->getNext() == nullptr) return;
        ptr->getNext()->setPrev(nullptr);
    }
    
    ptr->getNext()->setPrev(ptr->getPrev());
    ptr->getPrev()->setNext(ptr->getNext());
    
    //AFTER DEST
    
    ptr->setNext(dest->getNext());
    if(ptr->getNext()){
        ptr->getNext()->setPrev(ptr);
    }
    dest->setNext(ptr);
    ptr->setPrev(dest);
}






void iterate_right(Node* first, Node* last){
    if(first == last) return;
    Node* it = first;
    Node* greater = first;
    for(it; it!=last; it = it->getNext()){
        if(it->getData()->getValue() > greater->getData()->getValue()){
            greater = it;
        }
    }
    moveAfter(greater,last);
    iterate_left(first->getNext(), last);
}
void iterate_left(Node* first, Node* last){
    if(first == last) return;
    Node* it = last;
    Node* lesser = last;
    for(it; it!=first; it = it->getPrev()){
        if(it->getData()->getValue() < lesser->getData()->getValue()){
            lesser = it;
        }
    }
    if(first->getPrev())
        moveAfter(lesser, first->getPrev());
    else{
        
    }
    
    iterate_left(first, last->getPrev());
}
