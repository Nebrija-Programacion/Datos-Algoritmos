#include "data.h"

Data::Data(int v):
    value{v}
{

}

int Data::getValue() const
{
    return value;
}

void Data::setValue(int v)
{
    value = value;
}

bool operator ==(const Data &d1, const Data &d2)
{
    return (d1.value == d2.value);
}

ostream &operator <<(ostream &os, const Data &d)
{
    os << d.value;
    return os;
}
