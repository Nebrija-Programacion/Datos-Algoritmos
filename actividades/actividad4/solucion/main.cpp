#include <iostream>
#include <time.h>

#include "list.h"
#include "node.h"
#include "data.h"
#include "functions.h"
#include "tictoc.h"

using namespace std;


bool operator* (Data a, Data b){
    return true;
}


Node* bruteSearch(List const & list, int d){
    Node* it = list.getFirst();
    while(it != nullptr){
        if(it->getData()->getValue() == d) return it;
        it = it->getNext();
    }

    return nullptr;
}
int main()
{
    try{
        int range = 1000000000;
        int size = 200000;
        srand(time(NULL));
        List list;
        for(int i=0; i < size; i++){
            int v = rand()%range;
            list.push_back(new Data(v));
        }

        int d1 = rand()%range;
        int d2 = rand()%range;
        int d3 = rand()%range;
        int d4 = rand()%range;

        list.push_back(new Data(d1));
        list.push_back(new Data(d2));
        list.push_back(new Data(d3));
        list.push_back(new Data(d4));

        cout << "--------------" << endl;

        cout << "Sorting..." << endl;

        TicToc clock;
        clock.tic();
        list.bubbleSort();
        int t = clock.toc();
        cout << "Sorted in " << t << " ms." << endl;


        cout << "Looking for " << d1 << endl;

        clock.tic();
        Node* result = search(list.getFirst(), list.getLast(), d1, list.getSize());
        t = clock.toc();
        cout << "Dicotomic Search: " << t << " ms." << endl;

        clock.tic();
        result = bruteSearch(list,d1);
        t = clock.toc();
        cout << "Brute Search: " << t << " ms." << endl;
        result->print();
        cout << "--------------" << endl;

        cout << "Looking for " << d2 << endl;

        clock.tic();
        result = search(list.getFirst(), list.getLast(), d2, list.getSize());
        t = clock.toc();
        cout << "Dicotomic Search: " << t << " ms." << endl;
        result->print();

        clock.tic();
        result = bruteSearch(list,d2);
        t = clock.toc();
        cout << "Brute Search: " << t << " ms." << endl;
        result->print();
        cout << "--------------" << endl;

        cout << "Looking for " << d3 << endl;
        clock.tic();
        result = search(list.getFirst(), list.getLast(), d3, list.getSize());
        t = clock.toc();
        cout << "Dicotomic search: " << t << " ms." << endl;
        result->print();

        clock.tic();
        result = bruteSearch(list,d3);
        t = clock.toc();
        cout << "Brute Search: " << t << " ms." << endl;
        result->print();

        cout << "--------------" << endl;

        cout << "Looking for " << d4 << endl;
        clock.tic();
        result = search(list.getFirst(), list.getLast(), d4, list.getSize());
        t = clock.toc();
        cout << "Dicotomic search: " << t << " ms." << endl;
        result->print();

        clock.tic();
        result = bruteSearch(list,d4);
        t = clock.toc();
        cout << "Brute Search: " << t << " ms." << endl;
        result->print();

        cout << "--------------" << endl;



        cout << "Done!" << endl;
        return 0;
    }catch(string e){
        cout << e << endl;
    }
}
