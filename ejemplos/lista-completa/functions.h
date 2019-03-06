//
//  funcionesglobales.hpp
//  ListaCompleta
//
//  Created by Rocio Ruiz Ruiz on 27/2/19.
//  Copyright © 2019 Rocio Ruiz Ruiz. All rights reserved.
//

#ifndef funcionesglobales_hpp
#define funcionesglobales_hpp

#include <stdio.h>
#include "node.h"
#include "list.h"
#include "data.h"

Node* getMiddleNode(Node* first, int size);
Node* searchDicotomica(Node* first, Node* last, int dato, int size);
void iterate_right(Node* first, Node* last);
void iterate_left(Node* first, Node* last);
void moveAfter(Node* ptr, Node* dest);

#endif /* funcionesglobales_hpp */
