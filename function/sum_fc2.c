#include<stdio.h>
int sum();
int main()
{
	int x;
	x=sum();
	printf("sum=%d\n",x );
}

int sum()
{
	int a,b,ans;
	printf("enter a & b\n");
	scanf("%d %d",&a,&b);
	ans=a+b;
	return ans;
}