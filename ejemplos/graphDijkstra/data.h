#ifndef DATA_H
#define DATA_H

#include <iostream>

using namespace std;

class Data
{
    friend bool operator == (Data const & d1, Data const & d2);
    friend ostream & operator << (ostream & os, Data const & d);

public:
    Data(int v);

    int getValue() const;
    void setValue(int v);

protected:
    int value;
};

bool operator == (Data const & d1, Data const & d2);
ostream & operator << (ostream & os, Data const & d);

#endif // DATA_H
