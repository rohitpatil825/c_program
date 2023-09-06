#include<stdio.h>
#include<conio.h>
void swap(int*a,int*b)

{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("\nafter swap() a=%d\t b=%d\n",*a,*b);

}
void main()
{
    int a,b;
    printf("enter a 2 no: ");
    scanf("%d%d",&a,&b);
    printf("\n before swap() a=%d\t b=%d",a,b);
    swap(&a,&b);
    getch();
}