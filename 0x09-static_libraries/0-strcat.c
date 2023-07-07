#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * strcat - function to compine
 * @dest: first parameter
 * 
 * @src: second parameter
 *
 * Return: z Always (Success)
 */
char *_strcat(char *dest, char *src)
{
	char *z = (char*) malloc(strlen(dest) + strlen(src) + 1);
	
	if(z != NULL)
	{
		strcpy(z, dest);
		strcat(z, src);
	}
	
	return (z);
}
