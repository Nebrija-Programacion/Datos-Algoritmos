#include "data.h"

Data::Data(int d):
    value{d}
{

}

int Data::getValue() const
{
    return value;
}

void Data::setValue(int v)
{
    value = v;
}

bool operator ==(const Data &d1, const Data &d2)
{
    return (d1.value == d2.value);
}

bool operator <=(const Data &d1, const Data &d2)
{
    return (d1.value <= d2.value);
}

bool operator >=(const Data &d1, const Data &d2)
{
    return (d1.value >= d2.value);
}

bool operator >(const Data &d1, const Data &d2)
{
    return (d1.value > d2.value);
}

bool operator <(const Data &d1, const Data &d2)
{
    return (d1.value < d2.value);
}

std::ostream &operator <<(std::ostream &os, const Data &d)
{
    os << d.value;
    return os;
}
