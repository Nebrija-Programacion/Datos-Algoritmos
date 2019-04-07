#ifndef NODO_H
#define NODO_H
#include "persona.h"
#include <vector>


class Nodo
{
public:
    Nodo(Persona*);
    void runThrough();
    void setVisitedFalse();
    Nodo* search(string,string,string);

    vector<Nodo *> getChildren() const;
    void setChildren(const vector<Nodo *> &value);
    vector<Nodo *> getParents() const;
    void setParents(const vector<Nodo *> &value);
    bool getVisited() const;
    void setVisited(bool value);
    Persona *getPersona() const;
    void setPersona(Persona *value);

private:
    Persona * persona;
    vector<Nodo *> children;
    vector<Nodo *> parents;
    bool visited;
};

#endif // NODO_H
