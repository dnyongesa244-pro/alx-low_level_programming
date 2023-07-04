#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function to compaire
 *
 * @s: First string
 *
 * @s: first string
 *
 * @accept: second string
 *
 * Return: NULL (Succes)
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] ; i++)
	{
		for (j = 0; accept[j] ; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
