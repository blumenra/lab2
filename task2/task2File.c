#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
char encrypt(char c); /* Gets a char c and returns its encrypted form by adding 3 to its value. 
          If c is not between 0x20 and 0x7E it is returned unchanged */
char decrypt(char c); /* Gets a char c and returns its decrypted form by reducing 3 to its value. 
            If c is not between 0x20 and 0x7E it is returned unchanged */
char xprt(char c); /* xprt prints the value of c in a hexadecimal representation followed by a 
           new line, and returns c unchanged. */
char cprt(char c); /* If c is a number between 0x20 and 0x7E, cprt prints the character of ASCII value c followed 
                    by a new line. Otherwise, cprt prints the dot ('.') character. After printing, cprt returns 
                    the value of c unchanged. */
char my_get(char c); /* Ignores c, reads and returns a character from stdin using fgetc. */

char censor(char c) ;
char* map(char *array, int array_length, char (*f) (char));
 

int main(int argc, char **argv){
  	char arr1[] = {'H','E','Y','!', '!', 'A', 0};
	char* arr2 = map(arr1, 7, censor);
	printf("%s\n", arr2); /* HEY. */
	free(arr2);
}


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

char encrypt(char c){

	if((c > 32z) && (c < 126)){

		c += 3;
	}

	return c;
}

char my_get(char c){

	char a = fgetc(stdin);

	return a;
}

char decrypt(char c){

	if((c > 32z) && (c < 126)){

		c -= 3;
	}

	return c;	
}