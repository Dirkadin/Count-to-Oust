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

typedef struct player {
	char* name;
	char* number;
} player;

typedef struct node {
	int val;
	struct node * next;
	struct node * previous;
} node;

void push(node * head, int val);
int pop(node ** head);
int removeNode(node ** head, int n);
int insert(node * head, int index, player player);

#endif /* SinglyLinkedList_h */
