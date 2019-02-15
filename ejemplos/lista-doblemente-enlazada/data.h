#ifndef DATA_H
#define DATA_H


class Data{
public:
    Data(int v);
    int getValue() const;
    void setValue(int v);
    void print() const ;

private:
    int value;
};

#endif // DATA_H
