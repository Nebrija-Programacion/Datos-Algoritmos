#include "data.h"

Data::Data(int d):
    dato{d}
{

}

int Data::getDato() const
{
    return dato;
}

void Data::setDato(int value)
{
    dato = value;
}
