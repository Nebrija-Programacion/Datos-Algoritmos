#include <iostream>
#include <time.h>

#include "list.h"
#include "node.h"
#include "data.h"
#include "funcionesglobales.hpp"
#include "tictoc.h"


using namespace std;


bool operator* (Data a, Data b){
    return true;
}

int main()
{
    srand(time(NULL));
    List list;
    for(int i=0; i < 100; i++){
        int v = rand()%100;
        list.push_back(new Data(v));
    }





    cout << "--------------" << endl;
    TicToc clock;
    clock.tic();
    list.bubbleSort();
    cout << clock.toc();
    TicToc clockk;
    List lista;
    for(int i=0; i < 100; i++){
        int v = rand()%100;
        list.push_back(new Data(v));
    }
    
    clockk.tic();
    searchDicotomica(list.getFirst(), list.getLast(),33,list.getSize());
    
    cout << clockk.toc();
    cout << "--------------" << endl;

    return 0;
}
