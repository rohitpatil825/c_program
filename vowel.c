#include<stdio.h>
#include<conio.h>
void main()
{
    char al;
    printf("enter a alphabet");
    scanf("%c",&al);
    if(al=='a'||al=='e'||al=='i'||al=='o'||al=='u')
    {
       printf("you enter vowel");
    }
    else
    {
        printf("you enter consonant: ");
    }
    getch();
}