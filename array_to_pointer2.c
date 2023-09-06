#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,*d;
    d=a;
    printf("enter a element of array a : ");
    for(i=0;i<5;i++)
    {
        printf("\n enter a no : ");
        scanf("%d",d);
        d++;
    }
    d=a;
    printf("element of array a is :");
     for(i=0;i<5;i++)
    {
        printf("%4d",*d);
        d++;
    }
    getch();    
}