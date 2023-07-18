#ifndef FUNCTION_LIKE_MACRO
#define FUNCTION_LIKE_MACRO

#define ADS(X);
int ABS(int num)
{
	if(num == 0)
	{
		return 0;
	}
	if(num<0)
	{
		num *= -1;
		return num;
	}
	else
		return num;
}
#endif
