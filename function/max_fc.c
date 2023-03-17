#include<stdio.h>
int max();
int main()
{
	int x;
	x=max();
	printf("max=%d\n",x );
}

int max()
{
	int a,b,max;
	printf("enter a & b\n");
	scanf("%d %d",&a,&b);
	max=(a>b)?(a):(b);
	return max;
}