//
//  arbolgen.hpp
//  ArbolGenealogico
//
//  Created by Rocio Ruiz Ruiz on 25/3/19.
//  Copyright © 2019 Rocio Ruiz Ruiz. All rights reserved.
//

#ifndef arbolgen_hpp
#define arbolgen_hpp

#include "node.hpp"

class Arbol{
public:
    Arbol();
    void setMumNode(Node*);
    void setDadNode(Node*);
    void printall();
    void search(Persona*);
    
private:
    Node* mumnode;
    Node* dadnode;
    
};

#endif /* arbolgen_hpp */
