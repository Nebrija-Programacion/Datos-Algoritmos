#include "estructura.h"

Estructura::Estructura():
    yo{nullptr}
{

}

Node *Estructura::getYo() const
{
    return yo;
}

void Estructura::setYo(Node *value)
{
    yo = value;
}
