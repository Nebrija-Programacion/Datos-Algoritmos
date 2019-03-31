#include <iostream>
#include "node.h"
#include "arbolgen.h"
#include "persona.h"

using namespace std;

int main()
{
    ArbolGen arbol;
    string nombre, apellido1, apellido2;
    Node*yo = new Node(Persona("Alberto", "Gomez", "Vega"));
    arbol.setYo(yo);

    Node *ab1 = new Node(Persona("Sinforiano", "Vega", "Hernandez"));
    Node *ab2 = new Node(Persona("Pepa", "Hernandez", "Garcia"));

    Node *ab12child1 = new Node(Persona("Ana", "Vega", "Hernandez"));
    Node *ab12child2 = new Node(Persona("Juanma", "Vega", "Hernandez"));
    Node *ab12child3 = new Node(Persona("Sinfo", "Vega", "Hernandez"));

    ab1->pushChild(ab12child1);
    ab2->pushChild(ab12child1);

    ab1->pushChild(ab12child2);
    ab2->pushChild(ab12child2);

    ab1->pushChild(ab12child3);
    ab2->pushChild(ab12child3);

    Node *ab3 = new Node(Persona("Adrian", "Gomez", "Gonzalez"));
    Node *ab4 = new Node(Persona("Isabel", "Sanchez", "Fernandez"));

    Node *ab34child1 = new Node(Persona("Juan", "Gomez", "Sanchez"));
    Node *ab34child2 = new Node(Persona("Mari", "Gomez", "Sanchez"));
    Node *ab34child3 = new Node(Persona("Isa", "Gomez", "Sanchez"));

    ab3->pushChild(ab34child1);
    ab4->pushChild(ab34child1);

    ab3->pushChild(ab34child2);
    ab4->pushChild(ab34child2);

    ab3->pushChild(ab34child3);
    ab4->pushChild(ab34child3);

    Node * Ana = new Node(Persona("Ana", "Gomez", "Vega"));

    ab12child1->pushChild(yo);
    ab34child1->pushChild(yo);

    ab12child1->pushChild(Ana);
    ab34child1->pushChild(Ana);

    cout << "Esta es toda mi familia:\n\n";

    yo->runThrough();
    yo->reset();

    cout << "\nIntroduce el nombre para conocer sus padres e hijos:\n";
    cin >> nombre;
    cout << "Introuduce el primer apellido:\n";
    cin >> apellido1;
    cout << "Introduce el segundo apellido:\n";
    cin >> apellido2;

    Persona persona(nombre,apellido1,apellido2);
    Node *aux = yo->search(persona);




    cout << endl << "Sus padres son: " << endl;
    array<Node*,2> parents = aux->getParents();
    for(auto parent : parents){
        cout << parent->getPersona() << "\n";
    }
    yo->reset();
    cout << endl << "Sus hijos son: " << endl;
    vector<Node*> children = aux->getChildren();
    for(auto child : children){
        cout <<child->getPersona() << "\n";
    }
    return 0;
}
