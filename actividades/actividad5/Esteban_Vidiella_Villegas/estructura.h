#ifndef ESTRUCTURA_H
#define ESTRUCTURA_H
#include "node.h"

class estructura
{
public:
    estructura();
    node *getYo() const;
    void setYo(node *value);
    node* search(persona p);

protected:
    node* yo;
};
#endif // ESTRUCTURA_H
