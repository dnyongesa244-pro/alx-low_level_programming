#include "main.h"

/**
 * _islowe - is a function to check the letter
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
