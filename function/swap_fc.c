#include<stdio.h>
void swap();
int main()
{
	swap();
}
void swap()
{
	int a,b;
	printf("enter a & b\n");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",a,b);
}