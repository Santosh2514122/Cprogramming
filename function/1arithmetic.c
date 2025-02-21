#include<stdio.h>
void div()
{
int a,b ,div;
printf("enter the two number:");
scanf("%d%d",&a,&b);
div=a/b;
printf("div=%d\n",div);
}
void mul()
{

int a,b ,mul;
printf("enter the two number:");
scanf("%d%d",&a,&b);
mul=a*b;
printf("mul=%d\n",mul);
}
void sub()
{
int a,b ,sub;
printf("enter the two number:");
scanf("%d%d",&a,&b);
sub=a-b;
printf("sub=%d\n",sub);
}
void sum()
{
int a,b ,sum;
printf("enter the two number:");
scanf("%d%d",&a,&b);
sum=a+b;
printf("sum=%d\n",sum);
}
void main()
{
sum();
sub();
mul();
div();
}
