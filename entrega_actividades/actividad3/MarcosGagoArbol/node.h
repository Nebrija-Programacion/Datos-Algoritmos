#ifndef NODE_H
#define NODE_H
#include "data.h"
#include <array>
#include <vector>

class Node
{
public:
    Node(Data *_ID);
    Data *getID() const;
    void setID(Data *value);
    array<Node *, 2> getPapus() const;
    void setPapus(const array<Node *, 2> &value);
    Node *getPareja() const;
    void setPareja(Node *value);
    vector<Node *> getHijitos() const;
    void setHijitos(const vector<Node *> &value);

private:
    Data* ID;
    Node* pareja;
    array<Node*, 2>papus;
    vector<Node*>hijitos;
};

#endif // NODE_H
