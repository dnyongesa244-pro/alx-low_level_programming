#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - string to concatnate
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: sgtring (Success);
 */
char *str_concat(char *s1, char *s2)
{
	int length1, length2;

	char *string;

	if (s1 == NULL && s2 == NULL)
		return (" ");
	length1 = (s1 != 0) ? strlen(s1) : 0;
	length2 = (s2 != 0) ? strlen(s2) : 0;
	string = malloc(sizeof(char) * (length1 + length2) + 1);

	if (string == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
		strcpy(string, s1);
	if (s2 != NULL)
		strcat(string, s2);
	return (string);
}
