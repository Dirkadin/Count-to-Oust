//
//  SinglyLinkedList.c
//  Count-to-Oust
//
//  Created by Dirk on 10/17/18.
//  Copyright © 2018 Dirk. All rights reserved.
//

#include "SinglyLinkedList.h"

SinglyLinkedList createSinglyLinkedList(){
	SinglyLinkedList temp; // declare a SinglyLinkedList
	temp = (SinglyLinkedList)malloc(sizeof(struct SinglyLinkedList)); // allocate memory using malloc()
	temp->next = NULL;// make next point to NULL
	return temp;//return the new SinglyLinkedList
}

SinglyLinkedList push(SinglyLinkedList head, int value){
	SinglyLinkedList temp,p;// declare two SinglyLinkedLists temp and p
	temp = createSinglyLinkedList();//createSinglyLinkedList will return a new SinglyLinkedList with data = value and next pointing to NULL.
	temp->data = value; // add element's value to data part of SinglyLinkedList
	if(head == NULL){
		head = temp;     //when linked list is empty
	}
	else{
		p  = head;//assign head to p
		while(p->next != NULL){
			p = p->next;//traverse the list until p is the last SinglyLinkedList.The last SinglyLinkedList always points to NULL.
		}
		p->next = temp;//Point the previous last SinglyLinkedList to the new SinglyLinkedList created.
	}
	return head;
}
