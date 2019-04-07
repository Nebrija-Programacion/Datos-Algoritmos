#include <iostream>
#include "persona.h"
#include "node.h"
#include "arbolgen.h"

using namespace std;

int main()
{

    string nombre, apellido1, apellido2;
    int respuesta = 0;

    ArbolGen e;

    cout << "************ ARBOL GENEALOGICO *************" << endl << endl;

    ArbolGen arbol;
    Node* yo = new Node(Persona("Maria", "Gonzalez", "Herrero"));

    arbol.setYo(yo);

    //Abuelos paternos
    Node * ab1 = new Node(Persona("Loli", "Ruiz", "Macho"));
    Node * ab2 = new Node(Persona("Epifanio", "Gonzalez", "Polvorosa "));

    //Hijos de los abuelos paternos
    Node* ab12child1 = new Node(Persona("Loli", "Gonzalez", "Ruiz"));
    Node* ab12child2 = new Node(Persona("Pablo", "Gonzalez", "Ruiz"));
    Node* ab12child3 = new Node(Persona("Javier", "Gonzalez", "Ruiz"));
    Node* ab12child4 = new Node(Persona("Carlos", "Gonzalez", "Ruiz"));

    ab1-> pushChild(ab12child1);
    ab2-> pushChild(ab12child1);

    ab1-> pushChild(ab12child2);
    ab2-> pushChild(ab12child2);

    ab1-> pushChild(ab12child3);
    ab2-> pushChild(ab12child3);

    ab1-> pushChild(ab12child4);
    ab2-> pushChild(ab12child4);

   //Abuelos maternos
    Node * ab3 = new Node(Persona("Cayo", "Herrero", "Casado"));
    Node * ab4 = new Node(Persona("Natividad", "Antolin", "Castro"));

    //Hijos de los abuelos maternos
    Node* ab34child1 = new Node(Persona("Cayo", "Herrero2", "Antolin"));
    Node* ab34child2 = new Node(Persona("Nati", "Herrero", "Antolin"));

    ab3-> pushChild(ab34child1);
    ab4-> pushChild(ab34child1);

    ab3-> pushChild(ab34child2);
    ab4-> pushChild(ab34child2);

    //Nietos (Hijas de Nati y Javier)
    Node* ana = new Node(Persona("Ana", "Gonzalez", "Herrero"));

    ab12child3->pushChild(yo);
    ab34child2->pushChild(yo);

    ab12child3->pushChild(ana);
    ab34child2->pushChild(ana);

    yo->runThrough(0);

    cout << "-PARA BUSCAR A UN MIENBRO DE LA FAMILIA pulsa 1:";
    cin >> respuesta;
    cout << endl;

    if(respuesta == 1){
        cout << " Introduce su nombre y sus dos apellidos " << endl;
        cout << " -----------------------------------------" << endl;
        cout << "1.- NOMBRE: ";
        cin >> nombre;
        cout << "2.- PRIMER APELLIDO: ";
        cin >> apellido1;
        cout << "3.- SEGUNDO APELLIDO: ";
        cin >> apellido2;

    }

    cout << endl << endl;




    return 0;
}
