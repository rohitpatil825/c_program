#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c;
    r=1;
    while(r<=1000)
    {
        c=1;
        while(c<=10)
        {
            printf("%d\t",r*c);
            c++;

        }
        r++;
        printf("\n");

        
    }
    getch();
}