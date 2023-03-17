#include<stdio.h>
int main()
{
	int a,n;
	printf("enter a\n");
	scanf("%d",&a);
	n=a%10;
	if (n%2==0)
	{
		printf("last digit is even");
	}		
	else
	{
		printf("last digit is odd");
	}
	return 0;
}