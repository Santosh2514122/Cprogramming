#include<stdio.h>
int main()
{
int a,b,c, big;
printf("enter the any three number:");
scanf("%d%d%d",&a,&b,&c);
big=(a>b&&b>c?a:b>c?b:c);
printf("\nthe biggest number is :%d",big);
return 0;
}
