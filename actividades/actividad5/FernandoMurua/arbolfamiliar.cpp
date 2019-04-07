#include "arbolfamiliar.h"

ArbolFamiliar::ArbolFamiliar():
    yo{nullptr}
{

}

Node *ArbolFamiliar::getYo() const
{
    return yo;
}

void ArbolFamiliar::setYo(Node *value)
{
    yo = value;
}

Node *ArbolFamiliar::search(Persona *d)
{
bool encontrado=false;
     for(auto element:yo->getPadres()){
        if(element->getData()==d){
            encontrado=true;
            return element;


        }else {
            for(auto e:element->getHijos()){
                if(e->getData()==d){
                    encontrado=true;
                    return e;

                }
            }
        }
            for(auto ele:element->getPadres()){
                if(ele->getData()==d){
                    encontrado=true;
                    return ele;

                }else {
                    for(auto p:ele->getHijos()){
                        if(p->getData()==d){
                            encontrado=true;
                            return p;

                        }
                    }
                }
            }

    }
     if(encontrado==false){
         return nullptr;
     }

    }



