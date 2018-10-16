all: client.x

client.x: gameMain.o countOust.o drLinkedList.o
	gcc -Wall gameMain.o countOust.o drLinkedList.o -o oust.x

countOust.o: countOust.c countOust.h
	gcc -Wall -c countOust.c

drLinkedList.o: drLinkedList.c
	gcc -Wall -c drLinkedList.c

gameMain.o: gameMain.c
	gcc -Wall -c gameMain.c

clean:
	rm *.o
	rm *.x
