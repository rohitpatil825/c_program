#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char name[10];
    int i,l;
    printf("enter a name : ");
    gets(name);
    l=strlen(name);
    for(i=0;i<=10;i++)
    {
        printf("%c\n",name[i]);
    }
    printf("print name in reverse : \n");
    for(i=l-1;i>=0;i--)
    {
        printf("%c\n",name[i]);
    }
    getch();
}