#include<stdio.h>
#include<conio.h>
int main()
{
    int sum=0,b,r,n;
    printf("enter a 3 digit no : ");
    scanf("%d",&n);
    b=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;

    }
    if(b==sum)
        printf("this a armstorng");

    else{
        printf("not a armstrong");

    }    
    return 0;

}