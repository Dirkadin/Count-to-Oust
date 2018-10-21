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
	
	head->player.name = "bill";
	
	head->player.number = 4;
	
	
	push(head, "bob", 1);
	push(head, "sue", 2);
	push(head, "billy", 3);
	push(head, "mary", 4);
	
	player player = {"foo", 69};
	insertNodeAt(head, 2, player);
	
	
//	free(head->next);
//	free(head);
	
	return 0;
}
