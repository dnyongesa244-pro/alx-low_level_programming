#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char i, j,k;
	
	int x,y;
	printf("enter the operater you want to use");
	scanf("%c",&i);
	printf("enter the value of j");
	scanf("%c",&j);
	printf("enter the value of k");
	scanf("%c",&k);
	
	x = atoi(&j);
	y = atoi(&k);
	
	int (*op_func)(int, int) = get_op_func(i);
	if(op_func)
	{
		int result = op_func(x, y);
		printf("result: %d\n", result);
	}
	else
	{
		printf("Error\n");
		return (99);
	}
	return 0;
	
}
