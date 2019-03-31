#include "data.h"

Data::Data(string _nom, string ap_1, string ap_2):
    nom{_nom}
{
    ape.at(0)=ap_1;
    ape.at(1)=ap_2;

}

string Data::getNom() const
{
    return nom;
}

void Data::setNom(const string &value)
{
    nom = value;
}

array<string, 2> Data::getApe() const
{
    return ape;
}

void Data::setApe(const array<string, 2> &value)
{
    ape = value;
}
