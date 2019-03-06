#include <iostream>

#include "list.h"
#include "node.h"
#include "data.h"
#include <time.h>


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

    list.stoneSort();

    cout << list << endl;

    return 0;
}
