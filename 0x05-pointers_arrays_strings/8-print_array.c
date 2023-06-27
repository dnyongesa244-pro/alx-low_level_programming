#include <stdio.h>

/**
 * print_array - the function to print the arrays
 *
 * @a: the array parameter
 *
 * @n: the number of elements to p=be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
