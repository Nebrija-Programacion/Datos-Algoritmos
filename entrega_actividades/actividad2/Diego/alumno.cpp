#include "alumno.h"

Alumno::Alumno(int _ID, string _name)
{
    ID = _ID;
    name = _name;
}

int Alumno::getID() const
{
    return ID;
}

void Alumno::setID(int value)
{
    ID = value;
}

string Alumno::getName() const
{
    return name;
}

void Alumno::setName(const string &value)
{
    name = value;
}

void Alumno::greater_than(int value)
{
                    if(next){
                        if(veces == 0){
                            grandes.erase(grandes.begin(), grandes.end());
                        }else{
                        if(next->getID() > value){
                            grandes.push_back(Alumno(next->getID(),next->getName()));
                            veces++;
                            next->greater_than(value);
                        }else{
                            next->greater_than(value);
                            veces++;
                        }
                        }
                    }else{
                        veces = 0;
                        for(int i = 0; i<grandes.size(); i++){
                            cout << grandes.at(i).getID() << " " << grandes.at(i).getName() << endl;
                        }
                    }
}

void Alumno::equal_to(int value)
{
    if(next){
        if(veces == 0){
            iguales.erase(iguales.begin(), iguales.end());
        }else{
        if(next->getID() == value){
            iguales.push_back(Alumno(next->getID(),next->getName()));
            veces++;
            next->equal_to(value);
        }else{
            next->equal_to(value);
            veces++;
        }
        }
    }else{
        veces = 0;
        for(int i = 0; i<iguales.size(); i++){
            cout << iguales.at(i).getID() << " " << iguales.at(i).getName() << endl;
        }
    }
}

void Alumno::lesser_than(int value)
{
    if(next){
        if(veces == 0){
            menores.erase(menores.begin(), menores.end());
        }else{
        if(next->getID() < value){
            menores.push_back(Alumno(next->getID(),next->getName()));
            veces++;
            next->lesser_than(value);
        }else{
            next->lesser_than(value);
            veces++;
        }
        }
    }else{
        veces = 0;
        for(int i = 0; i<menores.size(); i++){
            cout << menores.at(i).getID() << " " << menores.at(i).getName() << endl;
        }
    }
}

void Alumno::within_interval(int value_f, int value_s)
{
    if(next){
        if(veces == 0){
            entre.erase(entre.begin(), entre.end());
        }else{
        if((next->getID() > value_f) && (next->getID() < value_s)){
            entre.push_back(Alumno(next->getID(),next->getName()));
            veces++;
            next->within_interval(value_f, value_s);
        }else{
            next->within_interval(value_f, value_s);
            veces++;
        }
        }
    }else{
        veces = 0;
        for(int i = 0; i<entre.size(); i++){
            cout << entre.at(i).getID() << " " << entre.at(i).getName() << endl;
        }
    }
}

void Alumno::push_back(int _ID, string _name)
{
    if(next){
            // Si hay un elemento despues
            next->push_back(_ID, _name);
        }else{
            // Es ultimo elemento
            next = new Alumno(_ID, _name);
            size++;
    }
}

void Alumno::print()
{
    if(next){
        cout << next->getID() << " " << next->getName() << endl;
        next->print();;
    }
}
