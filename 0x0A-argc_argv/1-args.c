#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - main function
 * @argc: first parameter
 *
 * @argv: second parameter
 *
 * Return: 0 success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
