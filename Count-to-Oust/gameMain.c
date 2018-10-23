//
//  gameMain.c
//  Count-to-Oust
//
//  Created by Dirk on 10/11/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include "countOust.h"

int main(int argc, const char * argv[]) {
	
	char str[20];
	int numOfPlayers;
	FILE* filePtr;
	int i = 0;
	char temp[100][100];
	
	
	printf("Welcome to Count-To-Oust!\nPlease enter the filename with your players: ");
	scanf("%s", str);
	
	filePtr = fopen(str, "r");
//	filePtr = fopen("players.txt", "r");
	if (filePtr == NULL) {
		perror("Error");
		exit(-1);
	} else {
		while ((fscanf(filePtr, "%sn", temp[i])) != EOF) {
			i++;
		}
	}
	
	fclose(filePtr);
	
	numOfPlayers = i/2;
	
	node * head = createGameCircle(str, numOfPlayers);
	
	node * current = head;
	
	for (int i = 0; i < numOfPlayers - 1; i++) {
		current = current->next;
	}
	
	head->previous = current;
	current->next = head;
	
	//We have a circle
	
	traverseList(head, numOfPlayers);
	
	int elimCount = 0;
	int direction = 0;
	printf("\nPlease enter the elimination count: ");
	scanf("%d", &elimCount);
	
	printf("\n Forwards: 0 or Backwards: 1?");
	scanf("%d", &direction);
	
	printf("Starting the game.\n");
	
	if (direction == 0) {
		while (numOfPlayers > 0) {
			if (numOfPlayers < elimCount) {
				printf("There are multiple winners!");
				break;
			}
			traverseFwd(head, elimCount, numOfPlayers);
			for (int i = 0; i < elimCount - 1; i++) {
				head = head->next;
			}
			numOfPlayers--;
		}
		
	} else {
		traverseBwd(head, elimCount, numOfPlayers);
	}
	
	
	
	
	
//	free(head->next);
//	free(head);
	
	return 0;
}
