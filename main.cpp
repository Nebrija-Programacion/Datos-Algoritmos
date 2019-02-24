#include <iostream>
#include <time.h>
#include "data.h"
#include "list.h"
#include "node.h"
using namespace std;

int main()
{
    srand(time(NULL));

    List *myList;
    for(int i=0; i < 10; i++){
        int v = rand()%100;
        myList->push_back(new Data);
    }

    cout << myList << endl;
    cout << "--------------" << endl;
    myList->stone();
    cout << myList << endl;
    return 0;
}

