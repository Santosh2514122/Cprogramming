#include<stdio.h>
int main()
{ int  a,b,c;
  int d,e,f;
 printf("enter the   angle of tringle:");
 scanf("%d%d%d",&a,&b,&c);

 printf("enter the   side of tringle:");
 scanf("%d%d%d",&d,&e,&f);

if((a+b+c==180 && a>0 && b>0 && c>0)||d+e>f && e+f>d && d+f>e)
{
    printf(" tringle base angle tringle");
}
else
{
    printf("tringle base on side:");
}
}