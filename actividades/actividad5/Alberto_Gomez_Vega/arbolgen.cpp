#include "arbolgen.h"

ArbolGen::ArbolGen():
    yo{nullptr}
{

}
Node *ArbolGen::getYo() const
{
    return yo;
}

void ArbolGen::setYo(Node *value)
{
    yo = value;
}
