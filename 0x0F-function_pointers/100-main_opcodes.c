#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: first parameter
 *
 * @argv: second parameter
 *
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int i, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	char *mainptr = (char *) main;

	for (i = 0 ; i < nbytes ; i++)
	{
		printf("%02x ", mainptr[i] & 0xFF);
	}
	return (0);
}
