all: client.x

client.x: gameMain.o countOust.o SinglyLinkedList.o
	gcc -Wall gameMain.o countOust.o SinglyLinkedList.o -o oust.x

countOust.o: countOust.c countOust.h
	gcc -Wall -c countOust.c

drLinkedList.o: SinglyLinkedList.c
	gcc -Wall -c SinglyLinkedList.c

gameMain.o: gameMain.c
	gcc -Wall -c gameMain.c

clean:
	rm *.o
	rm *.x
