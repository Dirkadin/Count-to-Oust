//
//  main.c
//  Count-to-Oust
//
//  Created by Dirk on 10/11/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include "countOust.h"

int main(int argc, const char * argv[]) {
	
	node * head = { NULL };
	head = malloc(sizeof(head));
	head->next = NULL;
	head->previous = NULL;
	head->val = 1;
	
	push(head, 2);
	push(head, 3);
	push(head, 4);
	push(head, 5);
	
	removeNode(&head, 2);
	
	
//	free(head->next);
//	free(head);
	
	return 0;
}
