//wap to red the mark of student and calculate  sum and avg using arry
#include<stdio.h>
 void main()
{  
 int mark[5];//mark=1,2,3,4,5
 float sum=0,avg;
 {
   printf("enter the mark:") ;
    for( int i=0;i<5;i++)
 scanf("%d",&mark[i]);
 } 
 for(int i=0;i<5;i++)
 { 
   sum =sum+mark[i];
 }
   avg=sum/5;{
  printf("%f\n",sum);
 }
 printf("%f\n",avg);
 }
