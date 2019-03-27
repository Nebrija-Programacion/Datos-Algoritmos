#ifndef NODE_H
#define NODE_H

#include "humano.h"

class Node
{
public:
    Node(Humano *_humano);
    ~Node();

    void print();

    Node *search(string _snombre, string _sapellido1, string _sapellido2);

    void reset();

    Humano *getHuman() const;
    void setHuman(Humano *value);

    array<Node *, 2> getPadres() const;
    void setPadres(const array<Node *, 2> &value);

    vector<Node *> getHijos() const;
    void setHijos(const vector<Node *> &value);

    bool getVisitado() const;
    void setVisitado(bool value);

private:
    Humano *human;
    array<Node *, 2> padres;
    vector<Node *> hijos;
    bool visitado;
};

#endif // NODE_H
