#include <stdio.h>

/*
 * This is a c program with a header
 *
 * the main function is the entry point to the program
 */
int main(void)
{
	int a;

	char b;

	long int c;

	long long int d;

	float e;

	printf("Size of a char: %zu byte(s)\n", sizeof(b));
	printf("Size of an int: %zu byte(s)\n", sizeof(a));
	printf("size of a long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a float: %zu byte(s)\n", sizeof(e));
	return (0);
}
