#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5][5];
    int r,c;
    printf("enter a size of array");
    for(r=0;r<5;r++)
    {
        for(c=0;c<5;c++)
        {
            scanf("%d",&a[r][c]);
        }
        printf("\n");
    }
    getch();
    
}