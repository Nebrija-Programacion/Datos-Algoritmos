//
//  persona.hpp
//  ArbolGenealogico
//
//  Created by Rocio Ruiz Ruiz on 25/3/19.
//  Copyright © 2019 Rocio Ruiz Ruiz. All rights reserved.
//

#ifndef persona_hpp
#define persona_hpp
#include <array>
#include <vector>
#include <iostream>
using namespace std;
class Persona{
public:
    Persona(string, string, string);
    Persona(){};
    string getNombre();
    string getApe1();
    string getApe2();
    
private:
    string nombre, ape1, ape2;
};

#endif /* persona_hpp */
