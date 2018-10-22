//
//  main.c
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
	
	printf("%s %s", temp[0], temp[1]);
	node * head = createGameCircle(str, numOfPlayers);
	
	
	
	
//	free(head->next);
//	free(head);
	
	return 0;
}
