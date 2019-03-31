//
//  persona.cpp
//  ArbolGenealogico
//
//  Created by Rocio Ruiz Ruiz on 25/3/19.
//  Copyright © 2019 Rocio Ruiz Ruiz. All rights reserved.
//

#include "persona.hpp"


Persona::Persona(string n, string a1, string a2): nombre{n}, ape1{a1}, ape2{a2}{}

string Persona::getNombre() {
    return nombre;
}

string Persona::getApe1(){
    return ape1;
}

string Persona::getApe2(){ 
    return ape2;
}

