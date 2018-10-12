//
//  drLinkedList.h
//  Count-to-Oust
//
//  Created by Dirk on 10/12/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#ifndef drLinkedList_h
#define drLinkedList_h

#include <stdio.h>
#include <stdlib.h>

typedef struct charList {
	struct charList* previous;
	char* data;
	struct charList* next;
}charList;

void push(charList** head, char* newData);

#endif /* drLinkedList_h */
