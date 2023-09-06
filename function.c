#include<stdio.h>
#include<conio.h>
int squre()
{
    int a,b;
    printf("enter a no : ");
    scanf("%d",&a);
    b=a*a;
    return b;

}
void main()
{
    int t;
    t=squre();
    printf("squre=%d",t);
    getch();

}