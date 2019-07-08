#include <iostream>

#include "list.h"

using namespace std;

int main()
{

    List list;

    list.insert(70); // el primero sera 70

    for(unsigned short i{0}; i < 15; i++){
        unsigned int aux = rand()%100;
        list.insert(aux);
        cout << aux << endl;
    }

    list.insert(32);
    list.insert(91);

    cout << list << endl;

    cout << "Busco el 32" << endl;
    Node* found = list.search(32);
    if(found && found->getPrev() && found->getNext())
        cout << *(found->getPrev()) << " - " << *found << " - " << *(found->getNext()) << endl;

    cout << "Busco el 91" << endl;
    found = list.search(91);
    if(found && found->getPrev() && found->getNext())
        cout << *(found->getPrev()) << " - " << *found << " - " << *(found->getNext()) << endl;

    cout << "Busco el 70" << endl;
    found = list.search(70);
    if(found && found->getPrev() && found->getNext())
        cout << *(found->getPrev()) << " - " << *found << " - " << *(found->getNext()) << endl;


    cout << "Borro el 32 " << endl;
    list.erase(32);
    cout << list << endl;


    cout << "Borro el 91 " << endl;
    list.erase(91);
    cout << list << endl;

    cout << "Borro el 70 " << endl;
    list.erase(70);
    cout << list << endl;


    return 0;
}
