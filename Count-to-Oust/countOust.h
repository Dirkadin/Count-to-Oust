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
#include <string.h>
#include "DoublyLinkedList.h"

//Creates the game circle (a doubly linked list)
node* createGameCircle(char *playersFile, int numOfPlayers);

//Traverses forward in the list starting from the current player and prints the detailes of players, 10 players per line
void traverseFwd(node*, int elimCount, int numOfPlayers);

//Inserts a new player at the specified position in the list, starting from the head
void insertAt(void);

//Remove a player from the list while still keeping the list's links intact
//void remove(player);

//Traverses backward in the list starting from the current player
void traverseBwd(node*);

//Prints out all of the names and numsers in a list, 10 per line
void traverseList(node*, int);

//Starts the game?
void startGame(void);

#endif /* countOust_h */
