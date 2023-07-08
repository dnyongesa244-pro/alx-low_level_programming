#include <string.h>
#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(__attribute__((unused)) int argc,char *argv[])
{
        printf("%s\n",argv[0]);
	return 0;
}
