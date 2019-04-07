#include <iostream>

#include "node.h"
#include "data.h"
#include "graph.h"
using namespace std;

int main()
{
    Node* n1 = new Node(new Data(1));
    Node* n2 = new Node(new Data(2));
    Node* n3 = new Node(new Data(3));
    Node* n4 = new Node(new Data(4));
    Node* n5 = new Node(new Data(5));
    Node* n6 = new Node(new Data(6));
    Node* n7 = new Node(new Data(7));


    Graph graph{n1};

    graph.link(n1,n2);
    graph.link(n1,n3);
    graph.link(n3,n4, true);
    graph.link(n3,n7);
    graph.link(n4,n5);
    graph.link(n4,n1);
    graph.link(n5,n6,true);
    graph.link(n6,n7);
    graph.link(n7,n2);

    graph.printAll();

    cout << endl << " --------------------- " << endl;

    cout << "1 to 5: ";
    graph.printPath(n5);

    cout << "1 to 7: ";
    graph.printPath(n7);

    return 0;
}
