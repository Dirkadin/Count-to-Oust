//
//  countOust.c
//  Count-to-Oust
//
//  Created by Dirk on 10/11/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include "countOust.h"

node* createGameCircle(char *playerFile, int numOfPlayers) {
	node* head = NULL;
	FILE* filePtr;
	char temp[30][100];
	int playerNum;
	
	filePtr = fopen(playerFile, "r");
	if (filePtr == NULL) {
		perror("Error");
		exit(-1);
	} else {
		for (int i = 0; i < numOfPlayers; i++) {
			fscanf(filePtr, "%30s  %d", temp[i], &playerNum);
			
			if (head == NULL) {
				head = newNode(temp[i], playerNum);
			} else {
				push(head, temp[i], playerNum);
			}
			
			
//			nextNode = newNode(temp[i], num);
//
//			current = head;
//
//			if (current->next != NULL) {
//				current = current->next;
//			}
//
//			current->next = nextNode;
//			tail = nextNode;
//			nextNode->previous = current->next;
		}
	}
	
	fclose(filePtr);
	
	return head;
}
