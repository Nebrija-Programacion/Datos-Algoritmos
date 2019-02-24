#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "lista.h"

void erase(Lista* lista, unsigned int index);
void move(Lista* lista, unsigned int ori, unsigned int dest);
Lista* greaterThan(Lista *lista, int value);
Lista* equalTo(Lista *lista,int value);
Lista* lesserThan(Lista *lista,int value);
Lista* within(Lista *lista,int value1, int value2);

#endif // FUNCTIONS_H
