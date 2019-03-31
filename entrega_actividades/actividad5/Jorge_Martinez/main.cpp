#include <iostream>
#include "arbol_genealogico.h"

using namespace std;

int main()
{

    Arbol_Genealogico * arbol = new Arbol_Genealogico(new Persona("Jorge", "Martinez", "Armenteros"));

    vector<Nodo*> padres;
    Nodo* padre = new Nodo(new Persona("Jerry", "Smith", "Torres"));
    Nodo* madre = new Nodo(new Persona("Beth", "Sanchez", "Ortega"));
    padres.push_back(padre);
    padres.push_back(madre);

    vector<Nodo*> hermanos;
    Nodo* hermano = new Nodo(new Persona("Morty", "Smith", "Sanchez"));
    Nodo* hermana = new Nodo(new Persona("Summer", "Smith", "Sanchez"));
    hermanos.push_back(hermana);
    hermanos.push_back(hermano);

    vector<Nodo*> abuelosM;
    Nodo* abueloM = new Nodo(new Persona("Rick", "Sanchez", "Rio"));
    Nodo* abuelaM = new Nodo(new Persona("Diane", "Bonnie", "Sinclair"));
    abuelosM.push_back(abueloM);
    abuelosM.push_back(abuelaM);

    vector<Nodo*> abuelosP;
    Nodo* abueloP = new Nodo(new Persona("Albert", "Smith", "la Piedra"));
    Nodo* abuelaP = new Nodo(new Persona("Josefina", "Bonaparte", "Scusemua"));
    abuelosP.push_back(abueloP);
    abuelosP.push_back(abuelaP);

    vector<Nodo*> tiosP;
    Nodo* tioP = new Nodo(new Persona("Alistar", "Smith", "Crowlie"));
    Nodo* tiaP = new Nodo(new Persona("Boudica", "Smith", "Islas"));
    tiosP.push_back(tioP);
    tiosP.push_back(tiaP);

    vector<Nodo*> tiosM;
    Nodo* tioM = new Nodo(new Persona("Alejandro", "Sanchez", "Mango"));
    Nodo* tiaM = new Nodo(new Persona("Corina", "Sanchez", "de Mormon"));
    tiosM.push_back(tioM);
    tiosM.push_back(tiaM);

    arbol->getMe()->setParents(padres);
    arbol->getMe()->getParents().at(0)->setChildren(hermanos);
    arbol->getMe()->getParents().at(1)->setChildren(hermanos);
    arbol->getMe()->getParents().at(0)->setParents(abuelosP);
    arbol->getMe()->getParents().at(1)->setParents(abuelosM);
    arbol->getMe()->getParents().at(0)->getParents().at(0)->setChildren(tiosP);
    arbol->getMe()->getParents().at(1)->getParents().at(1)->setChildren(tiosM);


    arbol->runThrough();
    cout << endl;
    Nodo* buscado = arbol->search("Corina", "Sanchez", "de Mormon");
    buscado->getPersona()->print();

    return 0;
}
