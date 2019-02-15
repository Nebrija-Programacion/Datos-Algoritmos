#include "data.h"

#include <iostream>

using namespace std;

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
    value = v;
}

void Data::print() const
{
    cout << value << endl;
}
