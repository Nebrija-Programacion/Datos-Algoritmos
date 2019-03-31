//
//  node.cpp
//  ArbolGenealogico
//
//  Created by Rocio Ruiz Ruiz on 25/3/19.
//  Copyright © 2019 Rocio Ruiz Ruiz. All rights reserved.
//

#include "node.hpp"


Node::Node(Persona* p1, Persona* p2) {
    familiar = p1;
    couple = p2;
}

void Node::printall() {
    cout <<  familiar->getNombre();
    if(couple) cout << " - " << couple->getNombre();
    cout << endl;
    cout << "-------------------------------------------" << endl;
    for(auto * child: children){
        child->printall();
    }
}

void Node::pushChild(Node* child){
    children.push_back(child);
}

bool Node::search(Persona *p){
    if (p->getNombre() == familiar->getNombre() && p->getApe1() == familiar->getApe1()) {
        for(auto * child: children)
            cout << "su child: " << child->familiar->getNombre() << endl;
        return true;
    }
    // --- no esta en este nodo ---------
    for(auto * child: children){
        if(child->search(p)){
            cout << "sus parents: " << familiar->getNombre();
            if (couple) cout << "  y  " << couple->getNombre();
            cout << endl;
            break;
        }
    }
    return false;
}

