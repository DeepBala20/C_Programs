#include<stdio.h>
void sum(int x,int y);
int main()
{
	int a,b;
	printf("enter a & b\n");
	scanf("%d %d",&a,&b);
	sum(a,b);
	
}

void sum(int x,int y)
{
	int ans;
	ans=x+y;
	printf("ans=%d\n",ans );
}