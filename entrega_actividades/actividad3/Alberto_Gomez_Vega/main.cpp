#include <iostream>
#include "list.h"
#include "node.h"
#include "data.h"
#include "time.h"

using namespace std;


int main()
{
    srand(time(NULL));
    List list;
    for(int i=0; i < 10; i++){
        int v = rand()%100;
        list.push_back(new Data(v));
    }

    cout << list << endl;

    cout << "---Lista con el ordenamiento burbuja---\n";

    list.bubbleSort();

    cout << list << endl;

    cout << "---Lista con el ordenamiento roca---\n";

    list.rockSort();

    cout << list << endl;

    cout << "---Lista con el ordenamiento roca inverso---\n";

    list.rockSortInverse();

    cout << list << endl;

    return 0;
}

