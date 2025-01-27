#include<stdio.h>
 struct  employee
 {
 int id;
 char name[100];
  char address[100];
   float  salary;
 };
 int main()
 {
 struct employee a;
 printf("enter the employee id:\n");
 scanf("%d",&a.id);
 printf("enter the employee name:\n");
 scanf("%s",&a.name);
 printf("enter the employee address:\n");
 scanf("%s",&a.address);
 printf("enter the employee  salary:\n");
 scanf("%f",&a.salary);
 printf("employ details");
 printf(" employee id=%d\n",a.id);
  printf(" employee name=%s\n",a.name);
 printf(" employee address=%s\n",a.address);
 printf(" employee salary=%f\n",a.salary);
 return 0;

 }

 