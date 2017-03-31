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
 
char quit(char c);

// void printMenu(struct fun_desc funcs[]);

struct fun_desc {
  char *name;
  char (*fun)(char);
};

int main(int argc, char** argv){
	


	char carray[5]= {0, 0, 0, 0, 0};
	char* arr = carray;
	char inputOp[2];
	char* inputOpPtr = inputOp;
	int intOp = 6;
	struct fun_desc funcs[] = {
								{"Censor", censor},
								{"Encrypt", encrypt},
								{"Decrypt", decrypt},
								{"Print hex", xprt},
								{"Print string",cprt},
								{"Get string", my_get},
								{"Quit", quit},
								{NULL, NULL}
							};

	while(1){
		
		int i=0;

		printf("Please choose a function:\n");

		while(funcs[i].name != NULL){

			printf("%d) %s\n", i, funcs[i].name);
			i++;
		}

		printf("Option: ");
		inputOpPtr = map(inputOpPtr, 2, funcs[5].fun);
		intOp = atoi(inputOpPtr);

		if((intOp >= 0) && (intOp <= 6)){

			printf("Within bounds\n");
		}
		else{
			
			printf("Not within bounds\n");
			free(arr);
			free(inputOpPtr);
			quit('a');
		}

		arr = map(arr, 5, funcs[intOp].fun);
		printf("DONE.\n\n");
	}


    return 0;

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

	if((c > 32) && (c < 126)){

		c += 3;
	}

	return c;
}

char my_get(char c){

	char a = fgetc(stdin);

	return a;
}

char decrypt(char c){

	if((c > 32) && (c < 126)){

		c -= 3;
	}

	return c;	
}

char xprt(char c){

	int decNumber = c;
	int i=0, j;
	int remain;
	char hexNum[3];

	while(decNumber != 0){

		remain = decNumber % 16;

		if(remain < 10){

			hexNum[i] = remain + 48;
		}
		else{
			
			hexNum[i] = remain + 55;
		}
		i++;
		decNumber /= 16;
	}

	printf("0x");
	for(j=i-1; j >= 0; j--){

		printf("%c", hexNum[j]);
	}
	puts("");
	return c;	
}

char cprt(char c){

	if((c > 32) && (c < 126)){

		printf("%c\n", c);
	}
	else{
		
		puts(".");
	}

	return c;
}

char quit(char c){

	exit(0);

	return c;
}