#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
char censor(char c) {
  if(c == '!')
    return '.';
  else
    return c;
}
 
char* map(char *array, int array_length, char (*f) (char)){
  char* mapped_array = (char*)(malloc(array_length*sizeof(char)));
  
  int i;

  for(i=0; i<array_length; i++){

  	mapped_array[i] = f(array[i]);
  }

  return mapped_array;
}
 
int main(int argc, char **argv){
  	char arr1[] = {'H','E','Y','!', '!', 'A', 0};
	char* arr2 = map(arr1, 7, censor);
	printf("%s\n", arr2); /* HEY. */
	free(arr2);
}