#include<stdio.h>
int main()
{
	int a,b,*p,*q,c;

	printf("enter a&b\n");
	scanf("%d %d", &a,&b);

	p=&a;
	q=&b;

	c=*p;
	*p=*q;
	*q=c;

	
	printf(" %d\n %d",*p,*q );
}