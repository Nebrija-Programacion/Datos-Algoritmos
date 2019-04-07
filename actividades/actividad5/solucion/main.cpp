#include <iostream>
#include "persona.h"
#include "tree.h"

using namespace std;

int main()
{
    Persona* p1 = new Persona("AlbertoValeroGomez");
    Persona* p2 = new Persona("JulioValeroGomez");
    Persona* p3 = new Persona("JulioValeroBuendia");
    Persona* p4 = new Persona("VirtudesGomezRomero");
    Persona* p5 = new Persona("ManuelValeroBuendia");
    Persona* p6 = new Persona("RosaBuendiaValero");
    Persona* p7 = new Persona("RafaelGomezSalmeron");
    Persona* p8 = new Persona("DoloresRomeroRomero");

    Node * np1 = new Node(p1);
    Node * np2 = new Node(p2);
    Node * np3 = new Node(p3);
    Node * np4 = new Node(p4);
    Node * np5 = new Node(p5);
    Node * np6 = new Node(p6);
    Node * np7 = new Node(p7);
    Node * np8 = new Node(p8);

    Tree tree;
    tree.setMe(np1);

    np1->addParent(np3);
    np2->addParent(np3);

    np1->addParent(np4);
    np2->addParent(np4);

    np3->addParent(np5);
    np3->addParent(np6);

    np4->addParent(np7);
    np4->addParent(np8);

    cout << "Albor Genalógico" << endl << endl;

    tree.printAll();

    cout << endl << "-----------------------" << endl << endl;
    Node* result = tree.search("VirtudesGomezRomero");
    if(result) result->printDetails();

    cout << endl << "-----------------------" << endl;

    return 0;
}
