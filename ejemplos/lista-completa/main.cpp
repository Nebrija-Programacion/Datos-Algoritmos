#include <iostream>

#include "list.h"
#include "node.h"
#include "data.h"

using namespace std;


int main()
{
   List list;
   Data* d1 = new Data(4);
   Data* d2 = new Data(2);
   Data* d3 = new Data(1);
   Data* d4 = new Data(3);

   list.push_back(d1);
   list.push_back(d2);
   list.push_back(d3);
   list.push_back(d4);


   cout << list << endl;

   cout << "--------------" << endl;

   list.bubbleSort();

   cout << list << endl;

    return 0;
}
