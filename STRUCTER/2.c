#include<stdio.h>  
void main ()  
{  
  char names[2][10],dummy; 
  int roll_numbers[2],i;  
  float marks[2];  
  for (i=0;i<3;i++)  
  {  
      
    printf("Enter the name, roll number, and marks of the student %d",i+1);  
    scanf("%s %d %f",&names[i],&roll_numbers[i],&marks[i]);  
    scanf("%c",&dummy); 
  }  
  printf("Printing the Student details \n");  
  for (i=0;i<3;i++)  
  {  
    printf("%s %d %f\n",names[i],roll_numbers[i],marks[i]);  
  }  
}  