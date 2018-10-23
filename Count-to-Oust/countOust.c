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
	char temp[200][30];
	int i = 0;
	
	filePtr = fopen(playerFile, "r");
	if (filePtr == NULL) {
		perror("Error");
		exit(-1);
	} else {
		while ((fscanf(filePtr, "%s  \n", temp[i])) != EOF) {
			i++;
		}
	}
	
	head = newNode(temp[0], (int)atol(temp[1]));
	
	for (i = 2; i<numOfPlayers*2; i += 2) {
		push(head, temp[i], (int)atol(temp[i + 1]));
	}
	
	fclose(filePtr);
	
	return head;
}

//Moves through the list and prints 10 players per line
void traverseList(node* head, int numOfPlayers) {
	int i;
	node* current;
	current = head;
	
		for (i = 0; i < numOfPlayers; i++) {
			if (i % 10 == 0 && i > 0) {
				printf("\n");
			}
			
			printf("Player %d: %s %d,", i+1, (void*)current->player.name, current->player.number);
			
			current = current->next;
		}
}

void traverseFwd(node* head, int elimCount, int numOfPlayers) {
	
}
