#include "main.h"

/**
 * isalpha - checks whether a character is an alphabet or not
 *
 * @c is the letter to be checked
 *
 * Return: 0 Always (Not alphabet) , 1 Always alphabet)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
