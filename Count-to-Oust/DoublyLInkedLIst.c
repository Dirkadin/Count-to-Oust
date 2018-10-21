//
//  SinglyLinkedList.c
//  Count-to-Oust
//
//  Created by Dirk on 10/17/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include "DoublyLinkedList.h"

//Pushes a node to the END of the list
void push(node * head, char* name, int number) {
	node * current = head;
	while (current->next != NULL) {
		current = current->next;
	}
	
	current->next = malloc(sizeof(node));
	current->next->player.name = name;
	current->next->player.number = number;
	current->next->next = NULL;
	current->next->previous = current;
}

//Removes the first item in the list
player pop(node ** head) {
	player retval = {"null", -1};
	node * next_node = NULL;
	
	if (*head == NULL) {
		return retval;
	}
	
	next_node = (*head)->next;
	retval = (*head)->player;
	free(*head);
	*head = next_node;
	
	return retval;
}

//Removes a node at a SPECIFIC index
player removeNode(node ** head, int index) {
	int i = 0;
	player retval = {"null", -1};
	node * current = *head;
	node * temp_node = NULL;
	
	if (index == 0) {
		return pop(head);
	}
	
	for (i = 0; i < index-1; i++) {
		if (current->next == NULL) {
			return retval;
		}
		current = current->next;
	}
	
	temp_node = current->next;
	retval = temp_node->player;
	current->next = temp_node->next;
	free(temp_node);
	
	return retval;
	
}

//Inserts a node at a SPECIFIC index
void insertNodeAt(node * head, int index, player player) {
	node * current = head;
	for (int i = 0; i < index; i++) {
		current = current->next;
	}
	
	node* nextNode = malloc(sizeof(node));
	
	nextNode->next = current->next;
	current->next->previous = nextNode;
	current->next = nextNode;
	nextNode->previous = current;
	nextNode->player = player;
	
}
