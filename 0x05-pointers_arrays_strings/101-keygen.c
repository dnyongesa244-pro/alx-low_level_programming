#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the main function
 */
int main()
{
	char pswd[84];
	int index = 0,sum = 0, diff_half1 ,diff_half2;
	
	srand(time(0));
	
	while (sum < 2772)
	{
		pswd[index] = 33 + rand() % 94;
		sum += pswd[index++];
	}
	pswd[index] = '\0';
	
	if((sum != 2772))
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		
		if((sum - 2772) % 2 != 0)
		{
			diff_half1++;
		}
		
		for (index = 0; pswd[index]; index++)
		{
			if (pswd[index] >= (33 + diff_half1))
			{
				pswd[index] = diff_half1;
				break;
			}
		}
		for (index = 0 ; pswd[index] ; index++)
		{
			if (pswd[index] >= (33 + diff_half1))
			{
				pswd[index] -= diff_half2;
				break;
			}
		}
	}
	printf("%s",pswd);
	return(0);
}
