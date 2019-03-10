#ifndef DATA_H
#define DATA_H

#include <ostream>

class Data
{
    friend bool operator == (Data const & d1, Data const &d2);
    friend bool operator >= (Data const & d1, Data const &d2);
    friend bool operator <= (Data const & d1, Data const &d2);
    friend bool operator > (Data const & d1, Data const &d2);
    friend bool operator < (Data const & d1, Data const &d2);
    friend std::ostream & operator << (std::ostream & os, Data const &d);
public:
    Data(int d);

    int getValue() const;
    void setValue(int v);

protected:
    int value;
};

bool operator == (Data const & d1, Data const &d2);
bool operator >= (Data const & d1, Data const &d2);
bool operator <= (Data const & d1, Data const &d2);
bool operator > (Data const & d1, Data const &d2);
bool operator < (Data const & d1, Data const &d2);

std::ostream & operator << (std::ostream & os, Data const &d);

#endif // DATA_H
