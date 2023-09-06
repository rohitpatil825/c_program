#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student 

{
    int rollno,s1,s2,s3,tot;
    char name[35],div;
    float avg;
    char rem[15];
};
void main()
{
    struct student manoj,sujay;
    struct student rashami={5,60,70,80,210,"rashami desai",'a',70.000,"first class"};
    sujay.rollno=10;
    sujay.s1=90;
    sujay.s2=85;
    sujay.s3=75;
    strcpy(sujay.name,"sujay patil");
    sujay.tot=sujay.s1+sujay.s2+sujay.s3;
    sujay.avg=(float)sujay.tot/3.0;
    if(sujay.avg>=75)
        strcpy(sujay.rem,"distinction");
    else if(sujay.avg>=70)
        strcpy(sujay.rem,"first class");
    else if(sujay.avg>=60)
        strcpy(sujay.rem,"second class");
    else if(sujay.avg>=35)
        strcpy(sujay.rem,"pass");
    else    
        strcpy(sujay.rem,"fail");
    printf("\n input data for manoj\n");
    printf("\n enter a roll no:");
    scanf("%d",&manoj.rollno);
    printf("\n enter a name:");
    gets(manoj.name);
    gets(manoj.name);
    printf("\n enter a division:");
    scanf("%c",&manoj.div);
    printf("\nenter a c mark:");
    scanf("%d",&manoj.s1);
    printf("\n enter a cpp mark:");
    scanf("%d",&manoj.s2);
    printf("\n enter a java mark:");
    scanf("%d",&manoj.s3);
    manoj.tot=manoj.s1+manoj.s2+manoj.s3;
    manoj.avg=(float)manoj.tot/3.0;
    if(manoj.avg>=75)
        strcpy(manoj.rem,"distinction");
    else if(manoj.avg>=70)
        strcpy(manoj.rem,"first class");
    else if(manoj.avg>=60)
        strcpy(manoj.rem,"second class");
    else if(manoj.avg>=35)
        strcpy(manoj.rem,"pass");
    else    
        strcpy(manoj.rem,"fail");
    printf("\n manoj data\n");
    printf("\n roll no:%d",manoj.rollno);
    printf("\n name:%s",manoj.name);
    printf("\n division:%c",manoj.div); 
    printf("\n c mark:%d",manoj.s1);
    printf(" \n cpp mark:%d",manoj.s2);
    printf("\n java mark:%d",manoj.s3);
    printf("\n total:%d",manoj.tot);
    printf("\n average:%.2f",manoj.avg);
    printf("\n remark:%s",manoj.rem);
    getch();

    printf("\n sujay data\n");
    printf("\n roll no:%d",sujay.rollno);
    printf("\n name:%s",sujay.name);
    printf("\n division:%c",sujay.div); 
    printf("\n c mark:%d",sujay.s1);
    printf(" \n cpp mark:%d",sujay.s2);
    printf("\n java mark:%d",sujay.s3);
    printf("\n total:%d",sujay.tot);
    printf("\n average:%.2f",sujay.avg);
    printf("\n remark:%s",sujay.rem);
    getch();

    printf("\n rashami data\n");
    printf("\n roll no:%d",rashami.rollno);
    printf("\n name:%s",rashami.name);
    printf("\n division:%c",rashami.div); 
    printf("\n c mark:%d",rashami.s1);
    printf(" \n cpp mark:%d",rashami.s2); 
    printf("\n java mark:%d",rashami.s3);
    printf("\n total:%d",rashami.tot);
    printf("\n average:%.2f",rashami.avg);
    printf("\n remark:%s",rashami.rem);
    getch();

}