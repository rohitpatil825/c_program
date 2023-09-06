#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a;
    printf("enter a no: ");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        printf("%d\t",a*i);

    }
    getch();
}