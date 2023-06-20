#include "main.h"

/**
 * _islower - checks whether a character is lowercase
 *
 * @c:  is the parrameter pased to the function
 *
 * Return: 1 Always (Lower  case), 2(Uppercase)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
