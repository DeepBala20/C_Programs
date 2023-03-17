#include<stdio.h>
int sum(int x,int y);
int main()
{
	int a,b,x;
	printf("enter a & b\n");
	scanf("%d %d",&a,&b);
	x=sum(a,b);
	printf("ans=%d\n",x );
}

int sum(int x,int y)
{
	int ans;
	ans=x+y;
	return ans;

}