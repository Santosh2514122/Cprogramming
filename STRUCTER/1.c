#include<stdio.h>
void main()
{
 char name[2][10],dummy;  
 int rollnumbers[2],i; 
 float marks[2];
 for(i=0;i<3;i++)
  {
    printf("enter the  name ,roll number,and marks of student %d",i+1);
    scanf("%s%d%f",&name[i],&rollnumbers[i],&marks[i]);
    scanf("%c",&dummy);
    printf("printing the student details\n");
  }
 for(i=0;i<3;i++)
  {
   printf ("%c%d%f\n",name[i],rollnumbers[i],marks[i]);
  }


}