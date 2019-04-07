#ifndef FAMILIA_H
#define FAMILIA_H
#include "node.h"

class Familia
{
public:
    Familia();
    Node *getAbueloP() const;
    void setAbueloP(Node *value);
    Node *getAbueloM() const;
    void setAbueloM(Node *value);
    Node *getAbuelaP() const;
    void setAbuelaP(Node *value);
    Node *getAbuelaM() const;
    void setAbuelaM(Node *value);
    void push(Node* a);
    void print();
private:
    Node* abueloP;
    Node* abueloM;
    Node* abuelaP;
    Node* abuelaM;
};

#endif // FAMILIA_H
