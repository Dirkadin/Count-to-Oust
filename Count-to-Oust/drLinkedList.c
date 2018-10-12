//
//  drLinkedList.c
//  Count-to-Oust
//
//  Created by Dirk on 10/12/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include "drLinkedList.h"

void push(charList** head, char* newData) {
	//Allocate memeory
	charList* newList = (charList*)malloc(sizeof(charList));
	
	//Apply data
	newList->data = newData;
	
	//Next is head, previous is null
	newList->next = *head;
	newList->previous = NULL;
	
	//Change previous head to ne head
	if ((*head) != NULL) {
		(*head)->previous = newList;
	}
}
