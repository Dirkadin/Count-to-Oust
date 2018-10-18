//
//  main.c
//  Count-to-Oust
//
//  Created by Dirk on 10/11/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include "countOust.h"

int main(int argc, const char * argv[]) {
	
	node_t * head = NULL;
	head = malloc(sizeof(node_t));
	head->val = 1;
	head->next = malloc(sizeof(node_t));
	head->next->val = 2;
	head->next->next = NULL;
	
	free(head->next);
	free(head);
	
	return 0;
}
