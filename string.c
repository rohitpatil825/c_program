#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    char ab, sring[10];
    printf("enter a char : ");
    scanf("%c",&ab);
    printf("enter a no : ");
    scanf("%d",&a);
    printf("enter a name : ");
    scanf("%s",sring);
    printf("no is : %d\n",a);
    printf("char is :%c\n",ab);
    printf("name is :%s\n",sring);
    getch();
}