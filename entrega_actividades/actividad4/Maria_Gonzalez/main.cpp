#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "tictoc.h"
#include "node.h"

using namespace std;

int main()
{



    TicToc clock;
    // start counting milliseconds
    clock.tic();
    cout << clock.toc() << " ms have elapsed." << endl;
    for(int i=0; i< 10000000; i++){
        int array[100000000];
        int aux = 0;
        int aux2 = 0;
        aux = (1 + rand() % 9999999);

        while (aux2 < i){
            if (aux != array[aux2])
                aux2++;
            else{
                aux = (1 + rand() % 9999999);
                aux2 = 0;
            }
        }
        cout << array[i] << endl;
        array[i] = aux;

    }

    return 0;
}
