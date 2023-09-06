#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;
    printf("enter a no: ");
    scanf("%d",&a);
    i=1;
    while(i<=10)
    {
        printf("%d\t",a*i);
        i++;
    }
    getch();
}