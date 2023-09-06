#include<stdio.h>
#include<conio.h>
void main()
{
    int x[5],y[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("enter a no :");
        scanf("%d",&x[i]);

    }
    for(i=0;i<5;i++)
    {
        printf("%4d",x[i]);

    }
    getch();
}