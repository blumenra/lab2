
all:menu

menu: menu.o
	gcc -g -m32 -Wall menu.o -o menu

menu.o: menu.c
	gcc -g -m32 -Wall -c menu.c -o menu.o

.PHONY:
	clean

clean:
	rm -f ./*.o menu