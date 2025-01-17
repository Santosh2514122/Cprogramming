#include<stdio.h>
int main()
{
int num1,num2, large;
printf("enter the any two number:");
scanf("%d%d",&num1,&num2);
large=(num1>num2)?num1:num2;
printf("large number is:%d",large);
return 0;
}