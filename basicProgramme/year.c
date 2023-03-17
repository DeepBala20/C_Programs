#include<stdio.h>
int main()
{
	int day,year,x,y,month,week;

	printf("enter days\n");
	scanf("%d",&day);

	year=day/365;
	x=day%365;

	month=x/12;
	y=x%12;

	week=y/7;
	day=y%7;

	printf("year %d\n",year );
	printf("month %d\n",month );
	printf("week %d\n",week );
	printf("day %d\n",day );
	return 0;
}