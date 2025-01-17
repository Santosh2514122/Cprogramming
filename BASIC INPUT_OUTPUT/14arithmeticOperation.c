//w.a.p enter the arithematic operater from user of ternary operate
#include<stdio.h>
int main()
{
int a,b,res=0;
char op;
printf("enter the two number:");
scanf("%d%d",&a,&b);
printf("enter the opr(+,-,*,/):");
scanf("%c",op);
res=op=='+' ?a+b:
res=op=='-' ?a-b:
res=op=='*' ?a*b:
res=op=='/' ?(b!=0?a? / b:0):0;
printf("result=%d\n",res);
return 0;
}