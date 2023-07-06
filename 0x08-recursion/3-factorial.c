#include "main.h"

/**
 * factorial - function to find fuctorial of a number
 *
 * @n: the number
 *
 * Return: (n * factorial(n - 1)) (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
