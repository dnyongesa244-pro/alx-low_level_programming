#include "main.h"
#include <stdio.h>

/**
 * _strstr - function to search for a subset
 *
 * @haystack: set parameter
 *
 * @needle: subset parameter
 *
 * Return: NULL (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *set = haystack;

		char *subset = needle;

		while (*set == *subset && *subset != '\0')
		{
			set++;
			subset++;
		}
		if (*subset == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}

