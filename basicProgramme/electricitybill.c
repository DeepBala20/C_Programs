#include<stdio.h>
int main(int argc, char const *argv[])
{
	int unit,amt,surcharge,total;
	printf("enter unit\n");
	scanf("%d",&unit);
	if(unit<=50)
	{
		amt=(unit*50)/100;
	}
	else if(unit<=150)
	{
		amt=25+((unit-50)*75)/100;      
	}
	else if(unit<=250)
	{
		amt=75+((unit-150)*120)/100;
	}
	else if(unit>250)
	{
		amt=195+((unit-250)*150)/100;
	}
	surcharge=(amt*20)/100;
	total=amt+surcharge;
	printf("your total is %d",total);
	return 0;
}