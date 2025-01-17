#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float d,r1,r2;
printf("enter the value");
scanf("%d%d%d",&a,&b,&c);
d=sqrt(b*b-4*a*c);
r1=((-1*b)+d);
r2=((-1*b)-d);
printf("first root are:%f",r1);
printf("second root are:%f",r2);
return 0;
}