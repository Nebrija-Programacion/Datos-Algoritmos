#include <iostream>
#include "node.h"
#include "estructura.h"
#include "persona.h"
using namespace std;

int main()
{
    estructura arbol;
    node* yo = new node(persona("Esteban", "Vidiella, Villegas "));
    arbol.setYo(yo);

    node * ab1 = new node(persona("Paulino","Vidiella, Boraita "));
    node* ab2 = new node(persona("Maria","Eguiluz, Gordillo "));

    node* ab12child1 = new node(persona("Javier", "Vidiella, Eguiluz "));
    node* ab12child2 = new node(persona("Cristina", "Vidiella, Eguiluz "));
    node* ab12child3 = new node(persona("Ana", "Vidiella, Eguiluz "));
    node* ab12child4 = new node(persona("Belen", "Vidiella, Eguiluz "));
    node* ab12child5 = new node(persona("Fernando", "Vidiella, Eguiluz "));

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

    node * ab3 = new node(persona("Antonio","Villegas, Diez "));
    node* ab4 = new node(persona("Maria del mar","Perez, Ibanez "));

    node* ab34child1 = new node(persona("Ricardo", "Villegas, Perez "));
    node* ab34child2 = new node(persona("Antonio", "Villegas, Perez "));
    node* ab34child3 = new node(persona("Gemma", "Villegas, Perez "));


    ab3->pushChild(ab34child1);
    ab4->pushChild(ab34child1);

    ab3->pushChild(ab34child2);
    ab4->pushChild(ab34child2);

    ab3->pushChild(ab34child3);
    ab4->pushChild(ab34child3);

    node* maria = new node(persona("Maria",  "Vidiella, Villegas "));

    ab12child5->pushChild(yo);
    ab34child3->pushChild(yo);

    ab12child5->pushChild(maria);
    ab34child3->pushChild(maria);

    yo->runThrough();
    yo->reset();
    persona *aux1=new persona("Fernando", "Vidiella, Eguiluz ");
    node*aux= arbol.search(*aux1);
    array<node*,2>parents = aux->getParents();

    cout << endl << "Los padres son: " << endl;
    for(auto parent : parents){
        cout << parent->getPersona();
    }
    cout << endl << "Los hijos son: " << endl;
    vector<node*> children = aux->getChildren();
    for(auto child : children){
        cout << child->getPersona();
    }
    return 0;
}
