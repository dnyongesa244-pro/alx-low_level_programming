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
	int length1, length2, i;

	char *string;

	if(s1 == NULL && s2 != NULL)
	{
		i = strlen(s2);
		string = malloc(sizeof(char) * i + 1);
		strcpy(string, s2);
		return (string);
	}
	if(s1 != NULL && s2 == NULL)
	{
		i = strlen(s1);
		string = malloc(sizeof(char) * i +1);
		strcpy(string, s1);
		return (string);
	}
	if (s1 && s2 == NULL)
		return (NULL);
	length1 = strlen(s1);
	length2 = strlen(s2);
	string = malloc(sizeof(char) * (length1 + length2) + 1);
	strcpy(string, s1);
	strcat(string, s2);

	if (string == NULL)
	{
		return (NULL);
	}
	return (string);
}
