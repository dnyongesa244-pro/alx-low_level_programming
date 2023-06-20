#include <stdio.h>
/**
 *  main - is the entry point
 *
 *  Return: 0 Always (Success)
void msg (const char* lett)
{
	int i = 0;
	while (lett[i] != ('\0'))
	{
		putchar(lett[i]);
		i++;
	}
	putchar(' ');
}
int main(void)
{
	const char* word = "_putchar";
	msg(word);
	return (0);
}
