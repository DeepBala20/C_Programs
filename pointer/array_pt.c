#include<stdio.h>
int main()
{
	int a[5],i;
	int *p;
	printf("enter array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a;
	printf("array elements through pointer");
	for(i=0;i<5;i++)
	{
		printf("%d",*p);
		p++;
	}
}