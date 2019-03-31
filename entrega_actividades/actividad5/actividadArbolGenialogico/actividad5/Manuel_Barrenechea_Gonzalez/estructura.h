#ifndef ESTRUCTURA_H
#define ESTRUCTURA_H
#include <node.h>

class Estructura
{
private:
    Node *yo;
public:
    Estructura();

    Node *getYo() const;
    void setYo(Node *value);
};

#endif // ESTRUCTURA_H
