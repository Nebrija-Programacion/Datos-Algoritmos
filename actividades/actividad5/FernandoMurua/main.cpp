#include <iostream>
#include "data.h"
#include "estructura.h"
#include "node.h"
#include "time.h"


using namespace std;

int main()
{
   Estructura *miEstructura=new Estructura;
   for(int i{0};i<20;i++){
       int j=rand()%100;
       Data *d=new Data(j);
       cout << j << endl;
       miEstructura->push(d);
   }
   cout <<"La lista de numero pares es : " << endl;
   miEstructura->print();
   cout << endl;

}
