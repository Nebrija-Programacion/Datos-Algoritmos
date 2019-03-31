#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <array>
using namespace std;

class Data
{
public:
    Data(string _nom, string ap_1, string ap_2);
    string getNom() const;
    void setNom(const string &value);
    array<string, 2> getApe() const;
    void setApe(const array<string, 2> &value);

private:
    string nom;
    array<string, 2>ape;
};

#endif // DATA_H
