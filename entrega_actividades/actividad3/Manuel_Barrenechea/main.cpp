#include <iostream>
#include "list.h"
#include "node.h"
#include "data.h"

using namespace std;

int main()
{
    srand(time(NULL));
    List list;
    for(int i{0}; i < 10; i++){
        int v = rand()%100;
        list.push_back(new Data(v));
    }

    cout << "Lista de numeros enteros aleatorios" << endl;
    cout << "-----------------------------------" << endl;

    cout << list << endl;

    cout << endl << "Lista ordenada con el algoritmo de la burbuja" << endl;
    cout << "---------------------------------------------" << endl;

    list.bubbleSort();

    cout << list << endl;

    cout << endl << "Lista ordenada con el algoritmo de la piedra" << endl;
    cout << "--------------------------------------------" << endl;

    list.rockSort();

    cout << list << endl;

    return 0;
}
