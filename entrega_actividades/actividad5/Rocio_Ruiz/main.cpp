//
//  main.cpp
//  ArbolGenealogico
//
//  Created by Rocio Ruiz Ruiz on 25/3/19.
//  Copyright © 2019 Rocio Ruiz Ruiz. All rights reserved.
//

#include <iostream>
#include "persona.hpp"
#include "node.hpp"
#include "arbolgen.hpp"

int main() {
    Arbol miArbol;
    //creo a las personas
    Persona abuelo("Demetrio", "Ruiz", "Villaluenga");
    Persona abuela("Aurora", "Serrano", "Arenas");
    Persona abuo("Eulogio", "Ruiz", "Cardenas");
    Persona abua("Adela","Lazaro","Nose");
    Persona papi("Eu", "Ruiz", "Lazaro");
    Persona mami("Ana", "Ruiz", "Serrano");
    Persona tio1("Jose Luis", "Ruiz", "Serrano");
    Persona tia1("Adela","Gil","Nose");
    Persona tio2("Eduardo", "Ruiz", "Serrano");
    Persona tia2("Esther","Hernandez","Nose");
    Persona marta("Marta", "Ruiz", "Gil");
    Persona alba("Alba", "Ruiz", "Gil");
    Persona mariauro("Maria","Ruiz","Hernandez");
    Persona cris("Cris","Ruiz","Hernandez");
    Persona bro("Pablo", "Ruiz", "Ruiz");
    Persona ace("Acerina","Trejo","Machin");
    Persona sis("Maria", "Ruiz", "Ruiz");
    Persona yo("Rocio", "Ruiz", "Ruiz");
    
    //creo a las familias(nodos)
    
    Node abuelosmaternos(&abuela , &abuelo);
    Node abuelospaternos(&abua, &abuo);
    Node tios1maternos(&tio1, &tia1);
    Node tios2maternos(&tio2, &tia2);
    Node papis(&mami, &papi);
    Node papis2(&papi, &mami);
    Node Albafam(&alba);
    Node MartaFam(&marta);
    Node Mariaurofam(&mariauro);
    Node crisfam(&cris);
    Node Pablofam(&bro, &ace);
    Node Mariafam(&sis);
    Node Rofam(&yo);
    
    
    miArbol.setMumNode(&abuelosmaternos);
    miArbol.setDadNode(&abuelospaternos);
    abuelosmaternos.pushChild(&tios1maternos);
    abuelosmaternos.pushChild(&tios2maternos);
    abuelosmaternos.pushChild(&papis);
    abuelospaternos.pushChild(&papis2);
    tios1maternos.pushChild(&Albafam);
    tios1maternos.pushChild(&MartaFam);
    tios2maternos.pushChild(&Mariaurofam);
    tios2maternos.pushChild(&crisfam);
    papis.pushChild(&Pablofam);
    papis.pushChild(&Mariafam);
    papis.pushChild(&Rofam);
    papis2.pushChild(&Pablofam);
    papis2.pushChild(&Mariafam);
    papis2.pushChild(&Rofam);
    
    miArbol.printall();
    string a,b,c;
    cout << "Solo se permite buscar gente de la sangre de Rocio por la falta de datos de la familia politica(ej: no habia q poner los padres de mi tia, luego no puedo imprimir a sus padres.) Además he querido separar la parte paterna de la materna a la hora de la busqueda, por eso el resultado en ocasiones de compartir ambas sangres lo imprime dos veces. Adelante! " << endl;
    cout <<  "Nombre de a quien quiere buscar: ";
    cin >> a;
    cout << "Primer apellido: ";
    cin >> b;
    cout << "Segundo apellido: ";
    cin >> c;
    Persona x(a,b,c);
    miArbol.search(&x);

    
    
    
    
    return 0;
}
