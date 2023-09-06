#include<stdio.h>
#include<conio.h>
void main()
{
  int s1,s2,s3,s4,s5,total;
  float avg;
  
  printf("enter 5 sub marks\n:");
  scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
  printf("%d\n",s2);
  total=s1+s2+s3+s4+s5;

  avg=total/5;
  printf("Average is : %f\n",avg);
  if(avg>=85)
  {
   printf("distinction");
  }
  else if(avg>=75)
  {
   printf("first class");
  }
  else if(avg>=60)
  {
     printf("second class");

  }
  else if(avg>=35)
  {
   printf("pass");
  }
  else if(avg<35)
  {
     printf("result is fail");

  }
  getch();
}



