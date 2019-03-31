//
//  node.hpp
//  ArbolGenealogico
//
//  Created by Rocio Ruiz Ruiz on 25/3/19.
//  Copyright © 2019 Rocio Ruiz Ruiz. All rights reserved.
//

#ifndef node_hpp
#define node_hpp

#include <stdio.h>
#include <array>
#include <vector>
#include "persona.hpp"
using namespace std;

class Node{ //REPRESENTA UNA FAMILIA-------------------------
public:
    Node(Persona*, Persona* = nullptr);
    void runThrough();
    void pushChild(Node*);
    bool search(Persona*);
    void printall();

    
private:
    Persona* familiar;
    Persona* couple;
    vector<Node*> children;
};

#endif /* node_hpp */
