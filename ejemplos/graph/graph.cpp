#include "graph.h"


Graph::Graph(Node *entryPoint):
    entryPoint{entryPoint}
{

}

void Graph::printAll()
{
    if(!entryPoint) throw string{"No entry point"};

    if(entryPoint){
        entryPoint->resetVisited();
        entryPoint->printAll();
    }

}

void Graph::link(Node *n1, Node *n2, bool twoWay)
{
    if(!n1 || !n2) throw string{"One of the nodes is invalid"};

    n1->addNeighbour(n2);
    if(twoWay) n2->addNeighbour(n1);
}

void Graph::printPath(Node *dest)
{
    if(computePath(dest)){
        entryPoint->printPath();
        cout << endl;
    }else {
        cout << "No Path found" << endl;
    }



}

bool Graph::computePath(Node *dest)
{
    if(!entryPoint) throw string{"No entry point"};

    entryPoint->resetVisited();

    if(entryPoint->computePath(dest))
        return true;

    return false;

}
