#include <iostream>
#include <vector>
#include <array>
#include "node.h"
#include "persona.h"
#include "arbolfamiliar.h"
using namespace std;

int main()
{
  ArbolFamiliar *miArbol=new ArbolFamiliar();
  Persona *yo=new Persona("Fernando","Murua3");
  Node *Y=new Node(yo);
  miArbol->setYo(Y);
  Persona *M=new Persona("Concepcion","Alcazar");
  Node *madre=new Node(M);
  Persona *P=new Persona("Fernando","Murua2");
  Node *padre=new Node(P);
  Persona *her=new Persona("Paloma","Murua");
  Node *h=new Node(her);
  array<Node *,2> misPadres={padre,madre};
  Y->setPadres(misPadres);
  vector<Node *> HijosP={{Y,h}};
  madre->setHijos(HijosP);
  padre->setHijos(HijosP);
  Persona *AbuelaM=new Persona("Luisa","Garcia");
  Persona *AbueloM=new Persona("Angel","Alcazar");
  Persona *tM1=new Persona("Maria","Alcazar");
  Persona *tM2=new Persona("Angel","Alcazar2");
  Persona *tM3=new Persona("Luis","Alcazar");
  Node *tioM1=new Node(tM1);
  Node *tioM2=new Node(tM2);
  Node *tioM3=new Node(tM3);
  vector<Node *>HijosAM={tioM1,tioM2,tioM3,madre};
  Node *aaM=new Node(AbuelaM);
  Node *aoM=new Node(AbueloM);
  array<Node *,2> padresM={aaM,aoM};
  aaM->setHijos(HijosAM);
  aoM->setHijos(HijosAM);
  madre->setPadres(padresM);
  tioM1->setPadres(padresM);
  tioM2->setPadres(padresM);
  tioM3->setPadres(padresM);
  Persona *aaP=new Persona("Maria","Ruiz");
  Persona *aoP=new Persona("Fernando","Murua");
  Node *AbuelaP=new Node(aaP);
  Node *AbueloP=new Node(aoP);
  Persona *tioP=new Persona("Pedro","Murua");
  Node *tp=new Node(tioP);
  array<Node *,2> padresP={AbueloP,AbuelaP};
  vector <Node *> HijosAP={padre,tp};
  tp->setPadres(padresP);
  padre->setPadres(padresP);
  AbueloP->setHijos(HijosAP);
  AbuelaP->setHijos(HijosAP);
  cout << "------------BUSQUEDA--------------" << endl;
 Persona *aux1=new Persona("A","b");
  Node *aux=miArbol->search(aux1);
  if(aux){
      cout << aux->getData()->getNombre() << " " << aux->getData()->getApellidos() << endl;
  }else {
      cout << "No se ha encontrado el familiar" << endl;
  }
  Node *aux2=miArbol->search(yo);
  if(aux2){
      cout << aux2->getData()->getNombre() << " " << aux2->getData()->getApellidos() << endl;
  }else {
      cout << "No se ha encontrado el familiar" << endl;
  }
  cout << "----------------------------------------" << endl;
Y->runThrough();

return 0;
}
