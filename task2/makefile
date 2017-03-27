all: task2file

task2file: task2file.o
	gcc -g -m32 -Wall task2file.o -o task2file

task2file.o: task2file.c
	gcc -g -m32 -Wall -c task2file.c -o task2file.o

.PHONY:
	clean

clean:
	rm -f ./*.o task2file