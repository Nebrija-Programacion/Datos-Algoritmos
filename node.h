#ifndef NODE_H
#define NODE_H
#include <array>
#include <vector>
#include "data.h"
using namespace std;

class Node
{
public:
    Node(Data*d);
    Data getNombre() const;
    void setNombre(const Data &value);

    array<Node *, 2> getParents() const;
    void setParents(const array<Node *, 2> &value);

    vector<Node *> getChildren() const;
    void setChildren(const vector<Node *> &value);

    bool getVisitado() const;
    void setVisitado(bool value);

    void pushChild(Node* child);
    void pushParent(Node *parent);
    void search(Data &person);
    void runThrough();

private:
    Data persona;
    Data nombre;
    array<Node*,2>parents;
    vector<Node*>children;
    bool visitado;
};

#endif // NODE_H
