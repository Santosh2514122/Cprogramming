//w.a.p find odd or even using bitwise operater
#include<stdio.h>
int main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
if(num^1) //or if(a^1)<a
{
   printf("odd");
}
else
{
  printf("even");
}
return 0;
}
