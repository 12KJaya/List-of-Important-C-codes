#include<stdio.h>
int main()
{
	int first_range,last_range,sum=0,i;
	printf("Enter first range:");
	scanf("%d",&first_range);
	printf("Enter last range:");
	scanf("%d",&last_range);
	for(i=first_range;i<=last_range;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
