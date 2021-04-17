#ifndef HEADER_FILE
#define HEADER_FILE

//Get rid of all the bodies and only leave the signatures
int power(int input, int exponent);
int recursivePower(int input, int exponent);
void changeVal(int *input);
int oldestValue(int ages[], int size);

#endif


/* Compile Instuctions:
1. gcc -c 5.2-libraries.c
2. gcc -c 5.2-libraries-main.c
3. gcc 5.2-libraries-main.o 5.2-libraries.o

OR

1. gcc 5.2-libraries-main.c 5.2-libraries.c
 */