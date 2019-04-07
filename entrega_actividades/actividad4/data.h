#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data(int v);
    Data(Data* d);

    int getValue() const;
    void setValue(int value);
    void print() const;

private:
    int value;
};

bool operator > (Data const & d1, Data const & d2);
bool operator < (Data const & d1, Data const & d2);
bool operator == (Data const & d1, Data const & d2);
bool operator != (Data const & d1, Data const & d2);
bool operator <= (Data const & d1, Data const & d2);
bool operator >= (Data const & d1, Data const & d2);

#endif // DATA_H
