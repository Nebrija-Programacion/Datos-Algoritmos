#include "nodo.h"

Nodo::Nodo(Persona * _persona): persona{_persona}, visited{false}
{

}

void Nodo::runThrough()
{
    if(visited) return;
    visited = true;

    persona->print();

    for (auto* padres: parents) {
        padres->runThrough();
    }

    for(auto* hijos: children){
        hijos->runThrough();
    }
}

void Nodo::setVisitedFalse()
{
    if(!visited) return;

    visited = false;

    for(auto* padres: parents){
        padres->setVisitedFalse();
    }

    for(auto* hijos: children){
        hijos->setVisitedFalse();
    }
}

Nodo *Nodo::search(string nombre, string apellido1, string apellido2)
{
    if(visited) return nullptr;

    if( persona->getNombre() == nombre){
        if( persona->getApellido1() == apellido1){
            if( persona->getApellido2() == apellido2){
                cout << "Encontrado!" <<endl;
                return this;
            }
        }
    }

    for(auto* padres: parents){
        Nodo* buscado = padres->search(nombre,apellido1, apellido2);
        if(buscado) return buscado;
    }

    for(auto* hijos: children){
        Nodo* buscado = hijos->search(nombre, apellido1, apellido2);
        if(buscado) return buscado;
    }

    return nullptr;

}

vector<Nodo *> Nodo::getChildren() const
{
    return children;
}

void Nodo::setChildren(const vector<Nodo *> &value)
{
    children = value;
}

vector<Nodo *> Nodo::getParents() const
{
    return parents;
}

void Nodo::setParents(const vector<Nodo *> &value)
{
    parents = value;
}

bool Nodo::getVisited() const
{
    return visited;
}

void Nodo::setVisited(bool value)
{
    visited = value;
}

Persona *Nodo::getPersona() const
{
    return persona;
}

void Nodo::setPersona(Persona *value)
{
    persona = value;
}

