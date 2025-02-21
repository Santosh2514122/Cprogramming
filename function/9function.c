#include<stdio.h>
int sum(int,int);//inislization
int main()
{
int x,y,c;
int a,b;
printf("enter x  an y:");
scanf("%d%d",&x,&y);
c=sum(x,y);
printf("sum=%d",c);


 int sum(int a,int b);

return a+b;

}