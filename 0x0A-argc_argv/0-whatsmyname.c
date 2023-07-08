#include <string.h>
#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * main - main function
 *
 * @argc: The character to print
 *
 * @argv: stirng
 *
 * Return: On success 0.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
