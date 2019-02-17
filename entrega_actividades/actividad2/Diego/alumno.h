#ifndef ALUMNO_H
#define ALUMNO_H

#include <vector>
#include <iostream>
using namespace std;

class Alumno
{
public:
    Alumno(int _ID = 0, string _name = " ");
    int getID() const;
    void setID(int value);

    string getName() const;
    void setName(const string &value);

    void greater_than(int value);
    void equal_to(int value);
    void lesser_than(int value);
    void within_interval(int value_f, int value_s);

    void push_back(int _ID, string _name);
    void print();

private:
    int ID;
    string name;
    Alumno* next;
    int veces = 0;
    int size = 0;
    vector<Alumno>grandes;
    vector<Alumno>iguales;
    vector<Alumno>menores;
    vector<Alumno>entre;

};

#endif // ALUMNO_H
