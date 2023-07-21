#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * @argc: number of arguments
 *
 * @argv: arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int x, y, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && y == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = op_func(x, y);
	printf("%d\n", result);
	return (0);
}
