#include <stdio.h>

/*
 * This is a c program with a header
 *
 * the main function is the entry point to the program
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n",sizeof(char));
	printf("Size of an int: %lu byte(s)\n",sizeof(int));
	printf("size of a long int: %lu byte(s)\n",sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n",sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n",sizeof(float));
}
