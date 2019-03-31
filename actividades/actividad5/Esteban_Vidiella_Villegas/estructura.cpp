#include "estructura.h"

estructura::estructura()
{

}

node *estructura::getYo() const
{
    return yo;
}

void estructura::setYo(node *value)
{
    yo = value;
}

node *estructura::search(persona p)
{
    bool visited=false;

    for(auto* parent: yo->getParents()){
        if(parent->getPersona()==p){
            visited=true;
            return parent;
        }else{
            for(auto* child: parent->getChildren()){
                if(child->getPersona()==p){
                    visited=true;
                    return child;
                }
            }
        }
        for(auto* parent1: parent->getParents()){
            if(parent1->getPersona()==p){
                visited=true;
                return parent1;
            }else{
                for(auto* child1: parent1->getChildren()){
                    if(child1->getPersona()==p){
                        visited=true;
                        return child1;
                    }
                }
            }
        }
    }
    if(visited==false)return nullptr;
}




