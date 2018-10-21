//
//  SinglyLinkedList.c
//  Count-to-Oust
//
//  Created by Dirk on 10/17/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include "SinglyLinkedList.h"

void push(node * head, char* name, int number) {
	node * current = head;
	while (current->next != NULL) {
		current = current->next;
	}
	
	current->next = malloc(sizeof(node));
	current->next->player->name = name;
	current->next->player->number = number;
	current->next->next = NULL;
	current->next->previous = current;
}
//finish converting to player
player pop(node ** head) {
	player retval = {"null", -1};
	node * next_node = NULL;
	
	if (*head == NULL) {
		return retval;
	}
	
	next_node = (*head)->next;
	retval = *(*head)->player;
	free(*head);
	*head = next_node;
	
	return retval;
}

player removeNode(node ** head, int n) {
	int i = 0;
	player retval = {"null", -1};
	node * current = *head;
	node * temp_node = NULL;
	
	if (n == 0) {
		return pop(head);
	}
	
	for (i = 0; i < n-1; i++) {
		if (current->next == NULL) {
			return retval;
		}
		current = current->next;
	}
	
	temp_node = current->next;
	retval = *temp_node->player;
	current->next = temp_node->next;
	free(temp_node);
	
	return retval;
	
}

bool insertNodeAt(node * head, int index, player player) {
	
	//get to correct spot
	//make new node
	//point now node to correct nodes
	//point previous node's next to new node
	//poin next nodes to new node
	node * current = head;
	for (int i = 0; i < index; i++) {
		current = current->next;
	}
	
	node* nextNode = malloc(sizeof(node));
	nextNode->next = nextNode;
	current->next->previous = nextNode;
	
	
	
	
	
	return true;
}
