#include <iostream>
#include "familia.h"
#include "node.h"
#include "data.h"

using namespace std;

void casar(Familia family, string a, string b){
    for(int i{0}; i<family.getAbueloM()->getHijitos().size();i++){
        for(int j{0};j<family.getAbueloP()->getHijitos().size();j++){
            if(family.getAbueloP()->getHijitos().at(j)->getID()->getNom()==a && family.getAbueloM()->getHijitos().at(i)->getID()->getNom()==b){
                family.getAbueloP()->getHijitos().at(j)->setPareja(family.getAbueloM()->getHijitos().at(i));
                family.getAbueloM()->getHijitos().at(i)  ->setPareja(family.getAbueloP()->getHijitos().at(j)) ;
            }
        }
    }
}

int main()
{
    Familia family;
    Data* abu1=new Data{"isidro","garcia", "san martin"};
    Data* abu2=new Data{"felix","gago", "martin"};
    Data* abu3=new Data{"maribel","de la serna","de pedro"};
    Data* abu4=new Data{"manoli","rebollo", "rodriguez"};
    family.setAbuelaM(new Node(abu3));
    family.setAbueloM(new Node(abu1));
    family.setAbuelaP(new Node(abu4));
    family.setAbueloP(new Node(abu2));
    Data* papi=new Data{"manuel", "gago", "rebollo"};
    Data* mami=new Data{"cruz","garcia","de la serna"};
    Data* tio=new Data{"felix","gago","rebollo"};
    Data* tia=new Data{"isabel","garcia","de la serna"};
    family.push(new Node(papi));
    family.push(new Node(mami));
    family.push(new Node(tio));
    family.push(new Node(tia));
    casar(family, "manuel", "cruz");
    Data* yo=new Data{"marcos","gago","garcia"};
    Data* sis=new Data{"lucia","gago","garcia"};
    family.push(new Node(yo));
    family.push(new Node(sis));
    return 0;
}
