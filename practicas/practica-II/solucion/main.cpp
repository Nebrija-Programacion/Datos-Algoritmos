#include <iostream>
#include <time.h>
#include "data.h"
#include "tree.h"

using namespace std;

int main()
{
    srand(time(NULL));
    int range = 100000;
    int size = 1000000;

    Tree tree;

    for(int i{0}; i<size; i++){
        int d = rand()%range;
        Data* data = new Data(d);
        tree.push(data);
    }

    for(int i{0}; i<20; i++){

        Data toFind{rand()%range};
        cout << "Looking for " << toFind << endl;
        Node* result = tree.search(toFind);
        if(result){
            cout << "Found: " << *(result->getData()) << endl;
        }else{
            cout << "Not found!" << endl;
        }

    }

    return 0;
}
