#include "familia.h"

Familia::Familia():
    abueloP{nullptr},
    abueloM{nullptr},
    abuelaP{nullptr},
    abuelaM{nullptr}
{
    abueloP->setPareja(abuelaP);
    abuelaP->setPareja(abueloP);
    abueloM->setPareja(abuelaM);
    abuelaM->setPareja(abueloM);
}

Node *Familia::getAbueloP() const
{
    return abueloP;
}

void Familia::setAbueloP(Node *value)
{
    abueloP = value;
}

Node *Familia::getAbueloM() const
{
    return abueloM;
}

void Familia::setAbueloM(Node *value)
{
    abueloM = value;
}

Node *Familia::getAbuelaP() const
{
    return abuelaP;
}

void Familia::setAbuelaP(Node *value)
{
    abuelaP = value;
}

Node *Familia::getAbuelaM() const
{
    return abuelaM;
}

void Familia::setAbuelaM(Node *value)
{
    abuelaM = value;
}

void Familia::push(Node *a)
{
    if(a->getID()->getApe().at(0)==getAbueloM()->getID()->getApe().at(0) && a->getID()->getApe().at(1)==getAbuelaM()->getID()->getApe().at(0)){
        a->getPapus().at(0)=getAbueloM();
        a->getPapus().at(1)=getAbuelaM();
        abueloM->getHijitos().push_back(a);
        abuelaM->getHijitos().push_back(a);
    }
    else if(a->getID()->getApe().at(0)==getAbueloP()->getID()->getApe().at(0) && a->getID()->getApe().at(1)==getAbuelaP()->getID()->getApe().at(0)){
        a->getPapus().at(0)=getAbueloP();
        a->getPapus().at(1)=getAbuelaP();
        abueloP->getHijitos().push_back(a);
        abuelaP->getHijitos().push_back(a);
    }
else if(a->getID()->getApe().at(0)==getAbueloM()->getID()->getApe().at(0)){
        for(auto x:abueloP->getHijitos()){
            if (x->getPareja()->getID()->getApe().at(0)==a->getID()->getApe().at(1)){
                a->getPapus().at(0)=x;
                a->getPapus().at(1)=x->getPareja();
                x->getHijitos().push_back(a);
                x->getPareja()->getHijitos().push_back(a);
            }
        }
    }
    else if(a->getID()->getApe().at(1)==getAbueloM()->getID()->getApe().at(0)){
        for(auto x:abueloM->getHijitos()){
            if (x->getPareja()->getID()->getApe().at(0)==a->getID()->getApe().at(0)){
                a->getPapus().at(1)=x;
                a->getPapus().at(0)=x->getPareja();
                x->getHijitos().push_back(a);
                x->getPareja()->getHijitos().push_back(a);
            }
        }
    }
    else if(a->getID()->getApe().at(1)==getAbueloP()->getID()->getApe().at(0)){
        for(auto x:abueloP->getHijitos()){
            if (x->getPareja()->getID()->getApe().at(0)==a->getID()->getApe().at(0)){
                a->getPapus().at(1)=x;
                a->getPapus().at(0)=x->getPareja();
                x->getHijitos().push_back(a);
                x->getPareja()->getHijitos().push_back(a);
            }
        }}
    else if (a->getID()->getApe().at(0)==getAbueloP()->getID()->getApe().at(0)) {
        for(auto x:abueloM->getHijitos()){
            if (x->getPareja()->getID()->getApe().at(0)==a->getID()->getApe().at(1)){
                a->getPapus().at(0)=x;
                a->getPapus().at(1)=x->getPareja();
                x->getHijitos().push_back(a);
                x->getPareja()->getHijitos().push_back(a);
            }
        }
    }
    else throw string{"ERROR"};
}
