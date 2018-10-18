//
//  main.c
//  Count-to-Oust
//
//  Created by Dirk on 10/11/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include "countOust.h"

int main(int argc, const char * argv[]) {
	
	node * head = NULL;
	head = malloc(sizeof(node));
	head->val = 1;
	head->next = malloc(sizeof(node));
	head->next->val = 2;
	head->next->next = NULL;
	
	node * current = head;
	
	while (current != NULL) {
		printf("%d\n", current->val);
		current = current->next;
	}
	
	free(head->next);
	free(head);
	
	return 0;
}
