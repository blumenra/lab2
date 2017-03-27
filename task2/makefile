all: task2File

task2File: task2File.o
	gcc -g -m32 -Wall task2File.o -o task2File

task2File.o: task2File.c
	gcc -g -m32 -Wall -c task2File.c -o task2File.o

.PHONY:
	clean

clean:
	rm -f ./*.o task2File