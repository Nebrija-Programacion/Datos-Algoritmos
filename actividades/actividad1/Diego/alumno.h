#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>


class Alumno
{
public:
    Alumno(int _ID = 0);
    void push_back(int value);
    Alumno* search(int value) const;
    int getID() const;
    bool erase(int value);
    Alumno* getNext() const;
    void push_front(int value);
    void setID(int value);
    Alumno* at(int value);
    bool move(int value, int values);
    void print();
    void push_where_i_whant(int value, int pos);
private:
    int ID;
    Alumno* next;
    int pass = 0;
    int times = 0;
    int size = 0;
};

#endif // ALUMNO_H
