#include "main.h"
/**
 * _islowe - is a function to check the letter
 *
 * @c:  is the parrameter pased to the function
 *
 * Return: 1 Always (Lower  case)
 *
 * Return: 0 Always (Not lower case)
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
