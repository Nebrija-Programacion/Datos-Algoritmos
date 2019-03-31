#ifndef STRUCTURE_H
#define STRUCTURE_H
#include "node.h"

class Structure
{
public:
    Structure();
    Node *getMe() const;

    Node *getPersona() const;
    void setPersona(Node *value);

    void setMe(Node *value);
    void search(Node* n);

private:
    Node *me;
    Node *persona;
};

#endif // STRUCTURE_H
