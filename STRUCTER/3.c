#include<stdio.h>
int main()
{
 char name[100];
 int id;
 int phone;
 char fathername[100];
 int fatherno;
 for( int i=0;i<3;i++)
 {
  printf("enter the student name:\n");
  scanf("%s",&name);
  printf("enter the student id:\n");
  scanf("%d",&id);
  printf("enter the student phone number:\n");
  scanf("%d",&phone);
  printf("enter the student  father name:\n");
  scanf("%s",&fathername);
  printf("enter the student father phone number\n:");
  scanf("%d",&fatherno);
 }
 printf("stdent detals:%s%d%d%s%d",name,id,phone,fathername,fatherno);

}   