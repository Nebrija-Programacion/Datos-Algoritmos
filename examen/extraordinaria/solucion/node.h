#ifndef NODE_H
#define NODE_H

#include <ostream>

using namespace std;

class Node
{
    friend bool operator < (const Node &n1, const Node &n2);
    friend ostream & operator << (ostream & os, Node const & n);
    friend class List;

public:
    Node(unsigned int data);

    unsigned int getData() const;
    void setData(unsigned int value);

    Node *getNext() const;
    Node *getPrev() const;

    void insertBefore(Node* n);
    void insertAfter(Node* n);

    Node* searchBefore(unsigned int d);
    Node* searchAfter(unsigned int d);

private:
    unsigned int data;
    Node* prev;
    Node* next;
};

bool operator < (const Node &n1, const Node &n2);
ostream &operator << (ostream & os, Node const & n);

#endif // NODE_H
