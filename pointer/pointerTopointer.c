#include<stdio.h>
int main()
{
 int a=10;
 int *p=&a;
 int **q=&p;
 int ***r=&q;
 printf("a=%d\n",a);
printf("p=%d\n",*p);
printf("q=%d\n",**q);
printf("r=%d\n",***r);
}