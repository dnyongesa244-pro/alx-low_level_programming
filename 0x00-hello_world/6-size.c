#include <stdio.h>

/*
 * This is a c program with a header
 *
 * the main function is the entry point to the program
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n",sizeof(char));
	printf("Size of an int: %zu byte(s)\n",sizeof(int));
	printf("size of a long int: %zu byte(s)\n",sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n",sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n",sizeof(float));
}
