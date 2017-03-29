#include <stdio.h>


int main(int argc, char** argv){

	// int iarray[3];
	// char carray[3];

	// printf("iarray: %p\n", iarray);
	// printf("iarray+1: %p\n", iarray+1);
	// printf("carray: %p\n", carray);
	// printf("carray+1: %p\n", carray+1);

	int iarray[] = {1,2,3};
	char carray[] = {'a','b','c'};
	int* iarrayPtr;
	char* carrayPtr;

	iarrayPtr = iarray;
	carrayPtr = carray;

	int i;

	for(i=0; i<3; i++){

		printf("%d", *(iarrayPtr + i));
	}

	puts("");

	for(i=0; i<3; i++){

		printf("%c", *(carrayPtr + i));
	}
	
	puts("");


	//******

	int* p;

	printf("%p\n", p);

	return 0;
}