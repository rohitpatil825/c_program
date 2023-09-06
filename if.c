#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter a two no : ");
    scanf("%d%d",&a,&b);
    if(b%a==0)
    {
        printf("no 1 is fully divided by no 2");

    }
    else
    {
        printf("no 1 is not fully divided by no 2");

    }
    getch();

}