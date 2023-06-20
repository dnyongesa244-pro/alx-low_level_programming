#include <stdio.h>

/**
 * main - This is a c program with a header
 * Return 0 (succes)
 */
int main(void)
{
	int a;

	char b;

	long int c;

	long long int d;

	float e;

	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %zu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
