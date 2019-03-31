#include <iostream>
#include <estructura.h>
#include <node.h>
#include <array>
#include <vector>

using namespace std;

int main()
{
    Estructura s;

    Node *yo = new Node(Persona("Manuel", "Barrenechea", "Gonzalez"));
    Node *hermana = new Node(Persona("Alejandra", "Barrenechea", "Gonzalez"));

    s.setYo(yo);

    Node *ab1 = new Node(Persona("Eduardo", "Barrenechea", "Gomez"));
    Node *ab2 = new Node(Persona("Elisa", "De la Fuente", "Cueto"));

    Node *ab12Child1 = new Node(Persona("Miguel", "Barrenechea", "De la Fuente"));
    Node *ab12Child2 = new Node(Persona("Sergio", "Barrenechea", "De la Fuente"));
    Node *ab12Child3 = new Node(Persona("Sonsoles", "Barrenechea", "De la Fuente"));

    ab1->pushChild(ab12Child1);
    ab2->pushChild(ab12Child1);

    ab1->pushChild(ab12Child2);
    ab2->pushChild(ab12Child2);

    ab1->pushChild(ab12Child3);
    ab2->pushChild(ab12Child3);

    Node *ab3 = new Node(Persona("Manuel", "Gonzalez", "Rodriguez"));
    Node *ab4 = new Node(Persona("Alicia", "Ordoñez", "Castillo"));

    Node *ab34Child1 = new Node(Persona("Manuel", "Gonzalez", "Ordoñez"));
    Node *ab34Child2 = new Node(Persona("Alicia", "Gonzalez", "Ordoñez"));
    Node *ab34Child3 = new Node(Persona("Soledad", "Gonzalez", "Ordoñez"));
    Node *ab34Child4 = new Node(Persona("Amparo", "Gonzalez", "Ordoñez"));
    Node *ab34Child5 = new Node(Persona("Isaac", "Gonzalez", "Ordoñez"));
    Node *ab34Child6 = new Node(Persona("Susana", "Gonzalez", "Ordoñez"));

    ab3->pushChild(ab34Child1);
    ab4->pushChild(ab34Child1);

    ab3->pushChild(ab34Child2);
    ab4->pushChild(ab34Child2);

    ab3->pushChild(ab34Child3);
    ab4->pushChild(ab34Child3);

    ab3->pushChild(ab34Child4);
    ab4->pushChild(ab34Child4);

    ab3->pushChild(ab34Child5);
    ab4->pushChild(ab34Child5);

    ab3->pushChild(ab34Child6);
    ab4->pushChild(ab34Child6);

    ab34Child3->pushChild(yo);
    ab12Child1->pushChild(yo);

    ab34Child3->pushChild(hermana);
    ab12Child1->pushChild(hermana);

    yo->runThrough();

    yo->reset();

    cout << "Introduce el nombre de la persona que quieras buscar: ";
    string nombre;
    cin >> nombre;

    cout << "Introduce el primer apellido de la persona que quieres buscar: ";
    string apellido1;
    cin >> apellido1;

    cout << "Introduce el segundo apellido de la persona que quieres buscar: ";
    string apellido2;
    cin >> apellido2;

    Persona persona(nombre,apellido1,apellido2);

    Node *aux = yo->search(persona);

    array<Node*,2> parents = aux->getParents();

    cout << endl << "Los padres de la persona que has buscado son: " << endl;
    for(auto parent : parents){
        cout << parent->getPersona();
    }

    yo->reset();

    cout << endl << "Los hijos de la persona que has buscado son: " << endl;

    vector<Node*> children = aux->getChild();

    for(auto child : children){
        cout << child->getPersona();
    }

    return 0;
}
