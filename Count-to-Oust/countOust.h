//
//  countOust.h
//  Count-to-Oust
//
//  Created by Dirk on 10/11/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#ifndef countOust_h
#define countOust_h

#include <stdio.h>

typedef struct player {
	char* name;
	char* number;
}*player;

typedef struct list {
	struct list* previous;
	player* player;
	struct list* next;
}*list;

//Creates the game circle (a doubly linked list)
void createGameCircle(char *playersFile, int numOfPlayers);

//Traverses forward in the list starting from the current player and prints the detailes of players, 10 players per line
void traverseFwd(list);

//Inserts a new player at the specified position in the list, starting from the head
void insertAt(list, player);

//Remove a player from the list while still keeping the list's links intact
//void remove(player);

//Traverses backward in the list starting from the current player
void traverseBwd(list);

//Starts the game?
void startGame(void);

#endif /* countOust_h */
