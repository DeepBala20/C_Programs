#include<stdio.h>
int main()
{
	int n,rem,rev=0,count=0,x;
	printf( "enter n\n" );
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%2;
		n=n/2;
		rev=(rev*10)+rem;
		count++;
	}
	while(count>0)
	{
		binary=(binary*10)+(binary%10);
		 count--;
		
	}

	printf("binary=%d\n",rev );
	return 0;
}