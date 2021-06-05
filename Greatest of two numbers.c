#include<stdio.h>
int main()
{
	int no1,no2;
	printf("enter the first number=");
	scanf("%d",&no1);
	printf("enter the second number=");
	scanf("%d",&no2);
	if(no1>no2)
	{
		printf("%d is greater",no1);
	}
	else if(no2>no1)
	{
		printf("%d is greater",no2);
	}
	else
	{
		printf("%d and %d are equal",no1,no2);
	}
	return 0;
}
	
	
