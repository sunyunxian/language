justify: justify.c word.c line.c
	gcc -o justify justify.c word.c line.c

justify.o: justify.c word.h line.h
	gcc -c justify.c

word.o: word.c word.h
	gcc -c word.c

line.o: line.c line.h
	gcc -c line.c
