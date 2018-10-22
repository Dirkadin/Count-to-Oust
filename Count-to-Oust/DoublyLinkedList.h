//
//  SinglyLinkedList.h
//  Count-to-Oust
//
//  Created by Dirk on 10/17/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

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

node * push(node * head, char* name, int number);
player pop(node ** head);
player removeNode(node ** head, int n);
void insertNodeAt(node * head, int index, player player);
node* newNode(char name[100], int number);

#endif /* SinglyLinkedList_h */
