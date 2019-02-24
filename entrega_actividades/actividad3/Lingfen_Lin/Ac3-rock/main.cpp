#include <iostream>
#include <time.h>

#include "list.h"
#include "node.h"
#include "data.h"

using namespace std;


int main()
{
    srand(time(NULL));
    List list;
    for(int i=0; i < 10; i++)
    {
        int v = rand()%100;
        list.push_back(new Data(v));
    }

    cout << "                     ***********************************************************************" << endl;
    cout << "                     * BIENVENIDO A LA LISTA DE ORDENACION DE LA PIEDRA DE NUMEROS ENTEROS *" << endl;
    cout << "                     ***********************************************************************" << endl << endl;

    cout << "Estos son los 10 numeros aleatorios sin ordenar:" << endl;
    cout << list << endl << endl;

    cout << "................................................" << endl;

    list.RockSort();

    cout << endl;
    cout << "Y aqui esos 10 numeros ordenados de mayor a menor:" << endl;
    cout << list << endl << endl;

    cout << "                                            Que tenga un buen dia ! " << endl;
    cout << "                                            -----------------------" << endl;

    return 0;
}
