#include "main.h"
#include <stdbool.h>

/**
 * recursion - function to compare strringd
 *
 * @a: first string
 *
 * @b: second string
 *
 * Return: true (Success)
 */
bool recursion(char *a, char *b)
{
	if (*a == '\0' && *b == '\0')
		return (true);
	if (*b == '*')
	{
		if (*(b + 1) == '*')
			return (true);
		if (*a == '\0')
			return (recursion(a, b + 1));
		return (recursion(a + 1, b) || recursion(a, b + 1));
	}
	if (*a != *b)
		return (false);
	return (recursion(a + 1, b + 1));
}

/**
 * wildcmp - function to pass string
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: recursion (Success)
 */
int wildcmp(char *s1, char *s2)
{
	return (recursion(s1, s2) ? 1 : 0);
}

