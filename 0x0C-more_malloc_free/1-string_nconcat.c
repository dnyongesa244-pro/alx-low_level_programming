#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - fuunction to joins strngs
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n:string size;
 *
 * Return: result (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;

	unsigned int lenght1, lenght2, totallenght;

	if (s1 == NULL || s2 == NULL || n == 0)
	{
		return (NULL);
	}

	lenght1 = strlen(s1);
	lenght2 = strlen(s2);

	if (n >= lenght2)
		totallenght = lenght1 + n;
	else
		totallenght = lenght2 + lenght1;
	result = malloc(sizeof(char) * (totallenght + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
