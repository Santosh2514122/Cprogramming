#include<stdio.h>
#include<math.h>
int main()
{
  float p,r,time, ci;
printf("enter the principle(amount)");
scanf("%f", &p);
printf("enter the rate)");
scanf("%f", &r);
printf("enter the  time");
scanf("%f", & time);
ci=p*(pow((1+r/100),time));
printf("compound interest=%f",ci);
return 0;
}
