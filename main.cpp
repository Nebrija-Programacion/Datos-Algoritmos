#include <iostream>
#include "data.h"
#include "node.h"
#include "structure.h"
using namespace std;

int main()
{
    Structure arbolGen;
    Node *yo=new Node(Data("Alberto", "Meneses", "Lopez"));
    Structure *a=new Structure();

    arbolGen.setMe(yo);

    Node *ab1p=new Node(Data("Miguel", "Meneses", ""));
    Node *ab2p=new Node(Data("Paquita","Quesada",""));

    Node *ab12pchild1=new Node(Data("Miguel", "Meneses", "Quesada"));
    Node *ab12pchild2=new Node(Data("Paloma", "Meneses", "Quesada"));

    ab1p->pushChild(ab12pchild1);
    ab2p->pushChild(ab12pchild1);

    ab1p->pushChild(ab12pchild2);
    ab2p->pushChild(ab12pchild2);

    Node *ab1m=new Node(Data("Manolo", "Lopez", "Deleito"));
    Node *ab2m=new Node(Data("Pepita", "Torres", ""));

    Node *ab12mchild1=new Node(Data("Elena", "Lopez", "Torres"));
    Node *ab12mchild2=new Node(Data("Nacho", "Lopez", "Torres"));

    ab1m->pushChild(ab12mchild1);
    ab2m->pushChild(ab12mchild1);

    ab1m->pushChild(ab12mchild2);
    ab2m->pushChild(ab12mchild2);

    ab12mchild1->pushChild(yo);
    ab12pchild1->pushChild(yo);

    return 0;
}
