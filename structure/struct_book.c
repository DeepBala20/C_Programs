#include<stdio.h>

struct book
{
	char title[50];
	char author[30];
	char publication[50];
	int price;
};

int main()
{
	struct book b1,b2,b3;

	printf("enter details of book :\n");
	printf("enter title : \n");
	scanf("%s", b1.title);
	printf("enter author name :\n");
	scanf("%s", b1.author);
	printf("enter publication name :\n");
	scanf("%s", b1.publication);
	printf("enter price : \n");
	scanf("%d",& b1.price);

	printf("enter details of book :\n");
	printf("enter title : \n");
	scanf("%s", b2.title);
	printf("enter author name :\n");
	scanf("%s", b2.author);
	printf("enter publication name :\n");
	scanf("%s", b2.publication);
	printf("enter price : \n");
	scanf("%d",& b2.price);

	printf("enter details of book :\n");
	printf("enter title : \n");
	scanf("%s", b3.title);
	printf("enter author name :\n");
	scanf("%s", b3.author);
	printf("enter publication name :\n");
	scanf("%s", b3.publication);
	printf("enter price : \n");
	scanf("%d",& b3.price);


	
	printf(" title : \n");
	printf("%s \n", b1.title);
	printf(" author name :\n");
	printf("%s \n", b1.author);
	printf(" publication name :\n");
	printf("%s \n", b1.publication);
	printf(" price : \n");
	printf("%d \n", b1.price);

	
	printf(" title : \n");
	printf("%s \n", b1.title);
	printf(" author name :\n");
	printf("%s \n", b1.author);
	printf(" publication name :\n");
	printf("%s \n", b1.publication);
	printf(" price : \n");
	printf("%d \n", b1.price);

	
	printf(" title : \n");
	printf("%s \n", b1.title);
	printf(" author name :\n");
	printf("%s \n", b1.author);
	printf(" publication name :\n");
	printf("%s \n", b1.publication);
	printf(" price : \n");
	printf("%d \n", b1.price);

}