//W.A.p take the number from user check that given number prime or not
#include<stdio.h>
int main()
{
int n,i,flag=0;
printf("enter the number: ");
scanf("%d",&n);
if(n<2)
printf(" number is not prime ");
else
{
    if(n==2)
    printf(" number is prime ");
} 
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
   flag=1;
   break; 
}
}
if(flag==0)
printf("\n yes it is prime");
else
printf("\n not it is prime");
}