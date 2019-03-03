#include <iostream>
#include "data.h"

using namespace std;

Data::Data(int v):
    value{v}
{

}

Data::Data(Data *d)
{
    value = d->getValue();
}

int Data::getValue() const
{
    return value;
}

void Data::setValue(int value)
{
    value = value;
}

void Data::print() const
{
    cout << value << endl;
}

bool operator >(Data const & d1, Data const & d2)
{
    return d1.getValue() > d2.getValue();
}

bool operator <(Data const & d1, Data const & d2)
{
    return d1.getValue() < d2.getValue();
}

bool operator ==(Data const & d1, Data const & d2)
{
    return d1.getValue() == d2.getValue();
}

bool operator !=(Data const & d1, Data const & d2)
{
    return d1.getValue() != d2.getValue();
}

bool operator >=(Data const & d1, Data const & d2)
{
    return d1.getValue() >= d2.getValue();
}

bool operator <=(Data const & d1, Data const & d2)
{
    return d1.getValue() <= d2.getValue();
}
