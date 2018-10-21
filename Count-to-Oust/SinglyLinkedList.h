//
//  SinglyLinkedList.h
//  Count-to-Oust
//
//  Created by Dirk on 10/17/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#ifndef SinglyLinkedList_h
#define SinglyLinkedList_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct player {
	char* name;
	int number;
} player;

typedef struct node {
	player player;
	struct node * next;
	struct node * previous;
} node;

void push(node * head, char* name, int number);
player pop(node ** head);
player removeNode(node ** head, int n);
bool insertNodeAt(node * head, int index, player player);

#endif /* SinglyLinkedList_h */
