#include<stdio.h>
#include<string.h>
union employ
{
	char name[20];
	int age;
	int sellary;
};
int main()
{
	union employ e1,e2,e3;
	

	strcpy(e1.name,"x");
	e1.age=23;
	e1.sellary=10000;

	strcpy(e2.name,"y");
	e2.age=25;
	e2.sellary=15000;

	strcpy(e3.name,"z");
	e3.age=30;
	e3.sellary=20000;

	
	printf("name of employe=%s\n",e1.name);
	printf("age=%d\n",e1.age );
	printf("sellary=%d\n",e1.sellary );

	printf("name of employe=%s\n",e2.name);
	printf("age=%d\n",e2.age );
	printf("sellary=%d\n",e2.sellary );

	printf("name of employe=%s\n",e3.name);
	printf("age=%d\n",e3.age );
	printf("sellary=%d\n",e3.sellary );
	


}
