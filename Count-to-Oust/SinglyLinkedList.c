//
//  SinglyLinkedList.c
//  Count-to-Oust
//
//  Created by Dirk on 10/17/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include "SinglyLinkedList.h"

void push(node * head, int val) {
	node * current = head;
	while (current->next != NULL) {
		current = current->next;
	}
	
	current->next = malloc(sizeof(node));
	current->next->val = val;
	current->next->next = NULL;
	current->next->previous = current;
}

int pop(node ** head) {
	int retval = -1;
	node * next_node = NULL;
	
	if (*head == NULL) {
		return -1;
	}
	
	next_node = (*head)->next;
	retval = (*head)->val;
	free(*head);
	*head = next_node;
	
	return retval;
}

int removeNode(node ** head, int n) {
	int i = 0;
	int retval = -1;
	node * current = *head;
	node * temp_node = NULL;
	
	if (n == 0) {
		return pop(head);
	}
	
	for (i = 0; i < n-1; i++) {
		if (current->next == NULL) {
			return -1;
		}
		current = current->next;
	}
	
	temp_node = current->next;
	retval = temp_node->val;
	current->next = temp_node->next;
	free(temp_node);
	
	return retval;
	
}

int insertAt(node * head, int position, player player) {
	return 0;
}
