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
    try{
    srand(time(NULL));
    List list;
    for(int i=0; i < 10000; i++){
        int v = rand()%100000;
        list.push_back(new Data(v));
    }

    int d = rand()%100000;

    list.push_back(new Data(d));

    // cout << list << endl;

    cout << "--------------" << endl;

    list.bubbleSort();

    cout << "Sorted" << endl;
    // cout << list << endl;

    cout << "Looking for " << d << endl;
    Node* result = search(list.getFirst(), list.getLast(), d, list.getSize());

    cout << "--------------" << endl;

    result->print();
    cout << "Done!" << endl;
    return 0;
    }catch(string e){
        cout << e << endl;
    }
}
