//w.a.p  swap of two number using bitwise operater
#include<stdio.h>
int main()
{
int a,b;
printf("enter the  two number:");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("value of a=%d and b=%d ",a,b);
return 0;
}
