#include<stdio.h>
int main()
{
	int a=2,b=3,*p,*q,ans;
	p=&a;
	q=&b;
	ans=*p+*q;
	printf("sum = %d\n",ans );
}