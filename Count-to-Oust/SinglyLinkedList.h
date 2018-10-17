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

typedef struct SinglyLinkedList {
	int data;
	struct SinglyLinkedList *next;
}*SinglyLinkedList;

SinglyLinkedList push(SinglyLinkedList head, int value);
SinglyLinkedList createSinglyLinkedList(void);

#endif /* SinglyLinkedList_h */
