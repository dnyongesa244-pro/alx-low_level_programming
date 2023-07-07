#include <stdbool.h>
#include <string.h>
#include "main.h"

/**
 * palindrom - function to check palindrom
 *
 * @a: number
 *
 * @start: Starting lenght
 *
 * @end: ending length
 *
 * Return: true (Success)
 */

int palindrom(char *a, int start, int end)
{
	if (start >= end)
		return (true);
	if (a[start] != a[end])
		return (false);
	return (palindrom(a, start + 1, end - 1));
}

/**
 * is_palindrome - function to find lengt of a string;
 *
 * @str: string
 *
 * Return: palindrom(str,0,length - 1) (Success)
 */
int is_palindrome(char *str)
{
	int length = strlen(str);

	return (palindrom(str, 0, length - 1));
}
