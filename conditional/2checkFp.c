#include<stdio.h>
int main()
{
int m,p,c,t,cm;
printf("enter the value of m,p,c");
scanf("%d%d%d",&m,&p,&c);
t=m+c+p;
cm=m+c;
if(m>=65 && c>=50 && p>=55)
printf("we are qualify");
else
{
    printf("not qualify");
}
return 0;
}