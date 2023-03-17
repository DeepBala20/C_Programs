#include<stdio.h>
int main()
{
	int a=10,*p;
	p=&a;
	printf("%d\n", a);
	printf("%d\n", *p);
	printf("%p\n",&a );
}