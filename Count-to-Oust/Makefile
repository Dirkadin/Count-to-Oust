all: client.x

client.x: gameMain.o countOust.o DoublyLinkedList.o
	gcc -Wall  gameMain.o countOust.o DoublyLinkedList.o -o oust.x

countOust.o: countOust.c countOust.h
	gcc -Wall -c countOust.c

SinglyLinkedList.o: DoublyLinkedList.c DoublyLinkedList.h
	gcc -Wall -c SinglyLinkedList.c

gameMain.o: gameMain.c
	gcc -Wall -c gameMain.c

clean:
	rm *.o
	rm *.x
