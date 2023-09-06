#include<stdio.h>
#include<conio.h>
void main()
{
    int x[5];
    int i,a=x[i];
    printf("enter a no of x array:\n ");
    for(i=0;i<5;i++)
    {
        printf("enter a no :");
        scanf("%d",&x[i]);

    }
    printf("even no of x array is:\n ");
    for(i=0;i<5;i++)
    {
        if(x[i]%2==0)
        {
            printf("%d is even no");

        }

    }
    getch();
}