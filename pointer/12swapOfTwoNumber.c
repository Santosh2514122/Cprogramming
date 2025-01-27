#include<stdio.h>
int main()
{
int a=10;
int b=20;
int *p1=&a;
int *p2=&b;
printf("before the swap:*p1=&a *p2=&b;",*p1,*p2);
*p1=*p1+*p2;
*p2=*p1-*p2;
*p1=*p1-*p2;
printf("after swap:*p1=%d *p2=%d",*p1,*p2);
return 0;
}
