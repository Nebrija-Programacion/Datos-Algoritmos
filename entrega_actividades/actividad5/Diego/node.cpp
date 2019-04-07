#include "node.h"

Node::Node(Humano *_humano):
    human{_humano},
    padres{nullptr},
    hijos{nullptr},
    visitado{false}
{

}

Node::~Node()
{
    if(this->getHijos().at(0)){
        for(int i = 0; i < this->getHijos().size(); i++){
            if(this->getHijos().at(i)->getVisitado() == false){
                this->getHijos().at(i)->~Node();
            }
        }
    }
    if(this->getPadres().at(0)){
        for(int i = 0; i < this->getPadres().size(); i++){
            if(this->getPadres().at(i)->getVisitado() == false){
                this->getPadres().at(i)->~Node();
            }
        }
    }
    delete this;
}

void Node::print()
{
    this->getHuman()->print();
    this->setVisitado(true);

    if(this->getHijos().at(0)){
        for(int i = 0; i < this->getHijos().size(); i++){
            if(this->getHijos().at(i)->getVisitado() == false){
                this->getHijos().at(i)->print();
            }
        }
    }
    if(this->getPadres().at(0)){
        for(int i = 0; i < this->getPadres().size(); i++){
            if(this->getPadres().at(i)->getVisitado() == false){
                this->getPadres().at(i)->print();
            }
        }
    }
}

Node *Node::search(string _snombre, string _sapellido1, string _sapellido2)
{
    if((this->getHuman()->getNombre() == _snombre)&&((this->getHuman()->getApellido_1() == _sapellido1)&&(this->getHuman()->getApellido_2() == _sapellido2))){
        return this;
    }else{
        this->setVisitado(true);
        if(this->getHijos().at(0)){
            for(int i = 0; i < this->getHijos().size(); i++){
                if(this->getHijos().at(i)->getVisitado() == false){
                    return this->getHijos().at(i)->search(_snombre, _sapellido1, _sapellido2);
                }
            }
        }
        if(this->getPadres().at(0)){
            for(int i = 0; i < this->getPadres().size(); i++){
                if(this->getPadres().at(i)->getVisitado() == false){
                    return this->getPadres().at(i)->search(_snombre, _sapellido1, _sapellido2);
                }
            }
        }
    }
}

void Node::reset()
{
    this->setVisitado(false);
    if(this->getHijos().at(0)){
        for(int i = 0; i < this->getHijos().size(); i++){
            if(this->getHijos().at(i)->getVisitado() == true){
                this->getHijos().at(i)->reset();
            }
        }
    }
    if(this->getPadres().at(0)){
        for(int i = 0; i < this->getPadres().size(); i++){
            if(this->getPadres().at(i)->getVisitado() == true){
                this->getPadres().at(i)->reset();
            }
        }
    }
}

Humano *Node::getHuman() const
{
    return human;
}

void Node::setHuman(Humano *value)
{
    human = value;
}

array<Node *, 2> Node::getPadres() const
{
    return padres;
}

void Node::setPadres(const array<Node *, 2> &value)
{
    padres = value;
}

vector<Node *> Node::getHijos() const
{
    return hijos;
}

void Node::setHijos(const vector<Node *> &value)
{
    hijos = value;
}

bool Node::getVisitado() const
{
    return visitado;
}

void Node::setVisitado(bool value)
{
    visitado = value;
}
