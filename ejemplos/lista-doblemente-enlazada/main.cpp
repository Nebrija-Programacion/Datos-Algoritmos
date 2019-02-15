#include <iostream>
#include "data.h"
#include "node.h"

using namespace std;

int main()
{
    Data* d1 = new Data(3);
    Data* d2 = new Data(5);
    Data* d3 = new Data(2);

    Node* lista = new Node();

    lista->push_back(d1);
    lista->insert_after(d2);
    lista->push_back(d3);

    Node* it = nullptr;

    for(it = lista->getNext(); it != nullptr; it = it->getNext()){
        if(it->getData()->getValue() == 5) it->insert_after(new Data(9));
    }

    for(it = lista->getNext(); it != nullptr; it = it->getNext()){
        cout << it->getData()->getValue() << " - ";
    }

    return 0;
}
