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
	
	x = atoi(j);
	y = atoi(k);
	get_op_func(i)(x,y);
	
}
