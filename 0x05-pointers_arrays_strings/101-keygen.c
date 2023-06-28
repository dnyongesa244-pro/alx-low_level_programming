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
	
	srand(time(NULL));
	
	for(int i = 0; i< length ;i++)
	{
		int index = rand() % charsetsize;
		char ch = charset[index];
		printf("%c",ch);
	}
	printf("\n");
}
int main(void)
{
	getpswd(8);
}
