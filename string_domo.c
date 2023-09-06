#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int len;
    char name[35];
    printf("\n enter a full name : ");
    gets(name);
    len=strlen(name);
    printf("|\n length of %s is : %d ",name,len);
    printf("\n name in upper case :  %s",strupr(name));
    printf("\n name in lower case :  %s",strlwr(name));
    printf("\n reverse string is :  %s",strrev(name));
    getch();

}