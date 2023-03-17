#include<stdio.h>
int main()
{
	int n,rev=0,rem=1,num;
	printf("enter number\n");
	scanf("%d",&n);
	num=n;

	while(n!=0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	
	if(num==rev)
	{
		printf("number is palindrome");
	}
	else
	{
		printf("number is not palindrome");
	}



	return 0;
}