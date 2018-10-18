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

typedef struct node {
	int val;
	struct node * next;
} node;

void push(node * head, int val);
int pop(node ** head);
int removeNode(node ** head, int n);

#endif /* SinglyLinkedList_h */
