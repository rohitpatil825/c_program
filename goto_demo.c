#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    goto inp1;
    calc:
    c=a+b;
    goto res;
    inp1:
        printf("\n enter a no: ");
        scanf("%d",&a);
    goto inp2;
    res:
        printf("\n sum of %d and %d is %d",a,b,c);
    goto stop;
    inp2:
        printf("\n enter a no:");
        scanf("%d",&b);
    goto calc;
    stop:
    getch();
}