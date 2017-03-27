#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){

	int i;

	int* p;

	int iarray[] = {1,2,3};
	char carray[] = {'a','b','c'};
	int* iarrayPtr;
	char* carrayPtr;

	iarrayPtr = iarray;
	carrayPtr = carray;


	for(i=0; i<3; i++){
		printf("%d ", *(iarrayPtr + i));
	}

	puts("");

	for(i=0; i<3; i++){
		printf("%c ", *(carrayPtr + i));
	}

	puts("");
	
	printf("%p\n", p);

	return 0;
}