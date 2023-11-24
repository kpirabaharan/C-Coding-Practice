output:	main.o message.o
	gcc main.o message.o -o output

main.o: main.c
	gcc -c main.c

message.o: message.c message.h
	gcc -c message.c

clean:
	rm *.o output