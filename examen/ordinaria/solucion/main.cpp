#include <iostream>

#include "tree.h"

using namespace std;



int main()
{
    Tree tree;

    // create tree
    tree.push(20);
    tree.push(15);
    tree.push(80);
    tree.push(10);
    tree.push(40);
    tree.push(30);
    tree.push(160);
    tree.push(5);
    tree.push(4);

    // print tree
    tree.print();

    cout << endl;

    Node* n80 = tree.search(80);
    if(n80) n80->printNode();

    Node* n10 = tree.search(10);
    if(n10) n10->printNode();

    if(n80) tree.erase(n80);
    tree.print();

    return 0;
}
