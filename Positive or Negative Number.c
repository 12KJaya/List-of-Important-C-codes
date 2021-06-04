#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number you want to enter=");
	scanf("%d",&num);
	if(num<=0)
	{
		if(num==0)
		{
			printf("Entered number is equal to zero");
		}
		else
		{
			printf("Entered number is negative");
		}
	}
	else
	{
		printf("Entered number is positive");
	}
	return 0;
}
