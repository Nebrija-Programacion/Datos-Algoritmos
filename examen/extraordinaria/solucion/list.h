#ifndef LIST_H
#define LIST_H

#include <ostream>
#include "node.h"

using namespace std;

class List
{
    friend ostream & operator << (ostream & os, List const & l);
public:
    List();
    Node* search(unsigned int d);
    bool erase(unsigned int d);
    void insert(unsigned int d);

private:
    Node* first;
};

ostream & operator << (ostream & os, List const & l);

#endif // LIST_H
