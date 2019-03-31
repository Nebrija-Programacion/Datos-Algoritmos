#include <iostream>

#include "node.h"
#include "persona.h"
#include "arbolgen.h"

using namespace std;

int main()
{
    cout << "                                  ***************************************************" << endl;
    cout << "                                  * BIENVENIDO AL ARBOL GENEALOGICO DE PATRICIA LIN *" << endl;
    cout << "                                  ***************************************************" << endl;

    ArbolGen arbol;
    Node* yo = new Node (Persona ("Patricia", "Lin"));

    arbol.setYo(yo);

    // Abuelos Paternos
    Node * ab1 = new Node(Persona("Cristina", "Lin"));
    Node * ab2 = new Node(Persona("Javier", "Lin"));

    //Hijos de los abuelos paternos
    Node* ab12child1= new Node (Persona("Helena ", "Lin"));
    Node* ab12child2= new Node (Persona("Sergio", "Lin"));
    Node* ab12child3= new Node (Persona("Leo", "Lin"));
    Node* ab12child4= new Node (Persona("Daniel", "Lin"));
    Node* ab12child5= new Node (Persona("Alba", "Lin"));


    ab1->pushChild(ab12child1);
    ab2->pushChild(ab12child1);

    ab1->pushChild(ab12child2);
    ab2->pushChild(ab12child2);


    ab1->pushChild(ab12child3);
    ab2->pushChild(ab12child3);

    ab1->pushChild(ab12child4);
    ab2->pushChild(ab12child4);

    ab1->pushChild(ab12child5);
    ab2->pushChild(ab12child5);




    // Abuelos Maternos
    Node * ab3 = new Node(Persona("Sandra", "Xu"));
    Node * ab4 = new Node(Persona("Marcos", "Xu"));

    //Hijos de los abuelos maternos.
    Node* ab34child1 = new Node(Persona("Sofia", "Xu"));
    Node* ab34child2 = new Node(Persona("Martin", "Xu"));
    Node* ab34child3 = new Node(Persona("Lucia", "Xu"));
    Node* ab34child4 = new Node(Persona("Hector", "Xu"));



    ab3->pushChild(ab34child1);
    ab4->pushChild(ab34child1);

    ab3->pushChild(ab34child2);
    ab4->pushChild(ab34child2);

    ab3->pushChild(ab34child3);
    ab4->pushChild(ab34child3);

    ab3->pushChild(ab34child4);
    ab4->pushChild(ab34child4);


    // Nietos (Hijos de Leo y Sofia).
    Node* Lili = new Node(Persona("Lili", "Lin"));
    Node* Adrian = new Node(Persona("Adrian", "Lin"));

    ab12child3->pushChild(yo);
    ab34child1->pushChild(yo);

    ab12child3->pushChild(Lili);
    ab34child1->pushChild(Lili);

    ab12child3->pushChild(Adrian);
    ab34child1->pushChild(Adrian);

    yo->runThrough();

    return 0;
}
