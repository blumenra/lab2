#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){

	int iarray[3];
	char carray[3];

	printf("iarray  : %p\n", iarray);
	printf("iarray+1: %p\n", iarray+1);
	printf("iarray+2: %p\n", iarray+2);
	printf("iarray+3: %p\n", iarray+3);
	printf("carray  : %p\n", carray);
	printf("carray+1: %p\n", carray+1);

	printf("&iarray : %p\n", &iarray);
	return 0;
}