#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: furst parameter
 *
 * @argv: second parameter
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i, x, sum;

	sum = 0;
	for (i = 1 ; i < argc ; i++)
	{
		x = atoi(argv[i]);

		if (x > 0)
		{
			sum += x;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
