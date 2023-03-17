#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char c;
	int line=0,tab=0,space=0,ch=0;
	fp=fopen("hi.txt","r");

	

	while(!feof(fp))
	{
		c=fgetc(fp);

		if(c=='\n')
		{
			line++;
		}
		else if(c=='\t')
		{
			tab++;
		}
		else if(c==' ')
		{
			space++;
		}
		else
		{
			ch++;
		}
	
	}

	printf("new lines = %d\n",line);
	printf("tabs = %d\n",tab );
	printf("space = %d\n",space );
	printf("ch = %d\n",ch );

	fclose(fp);

	return 0;
}