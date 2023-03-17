#include<stdio.h>
void  array(int a[]);
int main()
{
	int i=0,arr[5];
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	array(arr);
}

void  array(int a[])
{
	int i=0;
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	
	
}