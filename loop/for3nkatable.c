#include<stdio.h>
int main()
{ int n;
printf("enter the  any number:");
scanf("%d",&n);
for( int i=1;i<=10;i++)
//if(i%2!=0)
{
    printf("print the %d*%d =%d\n",n,i,n*i);
}
return 0;
}