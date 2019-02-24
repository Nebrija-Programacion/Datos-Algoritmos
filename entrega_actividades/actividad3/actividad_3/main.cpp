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
    for(int i=0; i < 10; i++){
        int v = rand()%100;
        list.push_back(new Data(v));
    }

    cout << list << endl;

    cout << "--------------" << endl;

    list.bubbleSort();

    cout << list << endl;

    return 0;
}
