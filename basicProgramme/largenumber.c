#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b & c\n");
	scanf("%d %d %d",&a,&b,&c);
	(a>b)?((a>c)?(printf("a is large")):(printf("c is large"))):((b>c)?(printf("b is large")):(printf("c is large")));
	return 0;

}