#include "main.h"

/**
 * int _strspn _ a function to check for similarities
 *
 * @s: First string
 *
 * @accept: The second string
 *
 * Return: value Always (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, check, value;

	value = 0;

	for(i = 0 ; s[i] ; i++)
	{
		check = 0 ;
		for (j = 0 ; accept[j] ; j++)
		{
			if(s[i] == accept[j])
			{
				value++;
				check = 1;
			}
		}
		if(check == 1)
		{
			s++;
		}
	}
	return (value);
}
