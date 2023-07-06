#include "main.h"

/**
 * _pow_recursion - function to print power of number
 *
 * @x: number
 *
 * @y: power
 *
 * Return: Pow (Suceess)
 */
int _pow_recursion(int x, int y)
{
	int pow = 1;

	if (y < 0)
		return (-1);
	while (y > 0)
	{
		pow *= x;
		y--;
	}
	return (pow);
}
