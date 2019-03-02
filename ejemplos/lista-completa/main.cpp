#include <iostream>
#include <time.h>

#include "list.h"
#include "node.h"
#include "data.h"
#include "functions.h"

using namespace std;


bool operator* (Data a, Data b){
    return true;
}

int main()
{
    srand(time(NULL));
    List list;
    for(int i=0; i < 10; i++){
        int v = rand()%100;
        list.push_back(new Data(v));
    }

    list.push_back(new Data(33));

    cout << list << endl;

    cout << "--------------" << endl;

    list.bubbleSort();

    cout << list << endl;

    Node* result = search(list.getFirst(), list.getLast(), 33, list.getSize());

    cout << "--------------" << endl;

    result->print();
    return 0;
}
