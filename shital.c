#include<stdio.h>
#include<conio.h>
int main()
{
	int rno;
	char d;
    char name[30];
	float per;
	printf("\n Enter a Division : ");
	scanf("%c",&d);
	printf("\n Enter a Name : ");
	scanf("%s",&name);
	printf("\n Enter a Roll no : ");
	scanf("%d",&rno);
	printf("\n Enter a Persentage : ");
	scanf("%f",&per);
	printf("\n Name = %s",name);
	printf("\n Division =%c",d);
	printf("\n Roll no =%d",rno);
	printf("\n Persentage =%f",per);
    return 0;
}