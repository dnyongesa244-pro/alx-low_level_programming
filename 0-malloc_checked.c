#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function to assingn memoriy
 *
 * @b: integernema
 *
 * Return: a (success)
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	if (b == 0)
	{
		exit(98);
	}
	a = malloc(b);
	return (a);
}
