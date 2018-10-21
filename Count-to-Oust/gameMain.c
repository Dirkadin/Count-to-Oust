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
	
//	char str[5] = {'b','i','l','l','\0'};
//	char *p = str;
//	head->player.name = p;
	
//	char * str = "bill";
//	head->player->name = str;
	
	head->player.name = "bill";
	
	head->player.number = 4;
	
	
	push(head, "bob", 1);
	push(head, "sue", 2);
	push(head, "billy", 3);
	push(head, "mary", 4);
	
	removeNode(&head, 2);
	
	
//	free(head->next);
//	free(head);
	
	return 0;
}
