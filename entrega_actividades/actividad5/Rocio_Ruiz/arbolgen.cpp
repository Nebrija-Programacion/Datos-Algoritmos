//
//  arbolgen.cpp
//  ArbolGenealogico
//
//  Created by Rocio Ruiz Ruiz on 25/3/19.
//  Copyright © 2019 Rocio Ruiz Ruiz. All rights reserved.
//

#include "arbolgen.hpp"


Arbol::Arbol(): mumnode{nullptr}, dadnode{nullptr}{}

void Arbol::setMumNode(Node *m){
    mumnode = m;
}
void Arbol::setDadNode(Node *d){
    dadnode = d;
}

void Arbol::printall(){ 
    if(mumnode) mumnode->printall();
    if(dadnode) dadnode->printall();
}

void Arbol::search(Persona *p) {
    if(mumnode) mumnode->search(p);
    if(dadnode) dadnode->search(p);
}

