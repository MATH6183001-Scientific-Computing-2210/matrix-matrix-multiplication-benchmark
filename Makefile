

all: main.c <your student id>.o
	gcc -o main.exe main.c <your student id>.o
	./main.exe

<your student id>.o: <your student id>/<your student id>.c
	gcc -o <your student id>.o -c <your student id>/<your student id>.c


clear:
	rm -rf *.o
	rm -rf *.exe