run: functions.o main.o
	gcc -g functions.o main.o -o run
functions.o: functions.c
	gcc -g functions.c -c -o functions.o
main.o: main.c
	gcc -g main.c -c -o main.o
