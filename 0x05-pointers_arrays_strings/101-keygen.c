#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * getpswd - function to generate pasword
 *
 * @length: parameter to determin pasword leng
 */

void getpswd(int length)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890@#$%^&*()!?";
	int charsetsize = sizeof(charset) - 1;

	int i, index;

	char ch;
	
	srand(time(NULL));
	for(i = 0; i< length ;i++)
	{
		index = rand() % charsetsize;
		ch = charset[index];
		printf("%c",ch);
	}
	printf("\n");
}
int main(void)
{
	getpswd(12);
	return (0);
}
