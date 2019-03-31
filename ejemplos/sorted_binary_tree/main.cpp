#include <iostream>
#include <time.h>
#include "data.h"
#include "tree.h"

using namespace std;

int main()
{
    srand(time(NULL));
    int range = 100;
    int size = 10;

    Tree tree;

    // Creating the tree
    for(int i{0}; i<size; i++){
        int d = rand()%range;
        cout << d << endl;
        Data* data = new Data(d);
        tree.push(data);
    }

    // Searching for a value


    Data toFind{rand()%range};
    cout << "Looking for " << toFind << endl;
    Node* result = tree.search(toFind);
    if(result){
        cout << "Found: " << *result << endl;
    }else{
        cout << "Not found!" << endl;
    }


    // Depth run of the tree

    tree.depthFirstRun();


    // Wide run of the tree

    return 0;
}
