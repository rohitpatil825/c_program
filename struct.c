#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char nm[10][15],temp[15];
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("enter a name : ");
		gets(nm[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++);
		{
			if(strcmpi(nm[j],nm[i])<0)
			{
				strcpy(temp,nm[i]);
				strcpy(nm[i],nm[j]);
				strcpy(nm[j],temp);
			}
		}
	}
	printf("\n after shorting :\n ");
	for(i=0;i<10;i++)
	{
		printf("%s\n",nm[i]);
	}
}