#include<stdio.h>
int main()
{
	int n;
	printf("enter number n \n");
	scanf("%d",&n);
	switch (n)
	{
	case 1 : 
	case 3 : 
	case 5 :
	case 7 :
	case 8 : 
	case 10 : 
	case 12 :printf("31 days in month"); break;
	case 2 :printf("28 or 29 days in month"); break;
	case 4 :
	case 6 :
	case 9 :
	case 11 : printf("30 days in month"); break;
	default : printf("enter 1 to 7 only");

	}
		return 0 ;
}