#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("Enter a number=");
	scanf("%d",&num);
	sum=(num*(num+1))/2;
	printf("The sum of first %d natural numbers is %d",num,sum);
	return 0;
}
		
