#include <iostream>
#include <time.h>
#include <vector>
#include "tictoc.h"
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
    vector<int>doit;
    List list;
    int a = 1000001;
    for(int i=0; i< 1000001; i++){
        doit.push_back(i);
    }
    TicToc clock;
    clock.tic();
    for(int i=0; i< 1000000; i++){
        int num=rand()%a;
        list.push_back(new Data(doit.at(num)));
        doit.erase(doit.begin()+num);
        a--;
    }
    cout << clock.toc() << " ms have elapsed." << endl;
    TicToc clockk;
    clockk.tic();
    Node* result = list.search(10);
    result = list.search(100);
    result = list.search(1000);
    result = list.search(10000);
    cout << clockk.toc() << " ms have elapsed." << endl;
    TicToc clockkk;
    clockkk.tic();
    list.bubbleSort();
    cout << clockkk.toc() << " ms have elapsed." << endl;
    TicToc clockkkk;
    clockkkk.tic();
    result = search(list.getFirst(), list.getLast(), 10, list.getSize());
    result = search(list.getFirst(), list.getLast(), 100, list.getSize());
    result = search(list.getFirst(), list.getLast(), 1000, list.getSize());
    result = search(list.getFirst(), list.getLast(), 10000, list.getSize());
    cout << clockkkk.toc() << " ms have elapsed." << endl;
    return 0;
}
